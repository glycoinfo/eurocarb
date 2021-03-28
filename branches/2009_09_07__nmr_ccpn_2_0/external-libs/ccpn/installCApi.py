import os
import string
import sys

capi_distribution = 'capi'

distributions = (capi_distribution,)

top_dir = os.getcwd()
#distribution = 'capi'
distribution = capi_distribution

ccpnmr_rel_dir = 'ccpnmr2.0'
api_rel_dir = 'c/xmlApi'

min_python_version = '2.4'
python_version = '2.4'
python_release = '2.4.2'
python_rel_dir = 'python%s' % python_version
python_tar_dir = 'Python-%s' % python_release
python_tar_file = python_tar_dir + '.tar'
python_tar_file_gz = python_tar_dir + '.tgz'

possible_platforms = ('linux', 'irix', 'sunos', 'darwin', 'win32', 'win64')

include_dir = 'include'
lib_dirs = ('lib', 'lib32')

python_program = 'python'

fp_log = None

def runCmds(cmds):
 
  cmd = string.join(cmds, ';')
  #print 'COMMAND =', cmd
  os.system(cmd)

def writeLog(message):

  if (fp_log):
    fp_log.write('%s\n' % message)

def doPrint(message):

  print message
  writeLog(message)

def getInput(prompt, doLower = 1, default = None):
 
  s = ''
  while (not s):
    s = raw_input(prompt + ' ')
    s = string.strip(s)
    if (not s and default is not None):
        s = default
 
  writeLog('%s %s' % (prompt, s))

  if (doLower):
    s = string.lower(s)
 
  return s

def getPlatform():

  platform = sys.platform
 
  flag = 0
  for p in possible_platforms:
    if (string.find(platform, p) >= 0):
      platform = p
      doPrint('Assuming your platform is %s' % platform)
      flag = 1
      break

  if (not flag):
    s = getInput('Cannot figure out your platform, is it one of %s (y or n)?' % (possible_platforms,))
    if (s == 'y'):
      while (platform not in possible_platforms):
        platform = getInput('Which platform (%s)?:' % (possible_platforms,))
    else:
      #doPrint('Unknown platform, there will probably be problems')
      platform = None

  return platform

def havePythonTarFile():

  return os.path.exists(os.path.join(python_rel_dir, python_tar_file_gz)) \
       or os.path.exists(os.path.join(python_rel_dir, python_tar_file))

def unpackPython():

  os.chdir(python_rel_dir)

  cmds = []
  if (os.path.exists(python_tar_dir)):
    cmds.append('rm -rf %s' % python_tar_dir)

  for dir in ('bin', 'include', 'lib', 'man'):
    if (os.path.exists(dir)):
      cmds.append('rm -rf %s' % dir)

  if (os.path.exists(python_tar_file_gz)):
    cmds.append('gunzip %s' % python_tar_file_gz)
  # else assume it has already been gunzipped
  cmds.append('tar xvf %s' % python_tar_file)

  cmds.append('gzip %s' % python_tar_file)
  cmds.append('mv %s.gz %s' % (python_tar_file, python_tar_file_gz))

  runCmds(cmds)

  #os.chdir('..')
  os.chdir(top_dir)

def compilePython():

  directory = os.path.join(python_rel_dir, python_tar_dir)
  os.chdir(directory)

  # now compile and install code

  cmds = []
  cmds.append('./configure --prefix=%s/%s' % (top_dir, python_rel_dir))
  cmds.append('make')
  cmds.append('make install')
  runCmds(cmds)

  os.chdir(top_dir)

def createEnvironmentFile(platform, python_abs_dir):

  env_file = os.path.join(ccpnmr_rel_dir, api_rel_dir, 'environment.txt')

  if (not platform):
    doPrint('Unknown platform, %s installation procedure will probably fail and you will need to edit %s by hand, continuing anyway using linux options' % (distribution, env_file))
    platform = 'linux'

  unix_python_lib_flags = 'lib/python%s/config' % python_version
  unix_python_lib = '-lpthread -ldl -lpython%s' % python_version

  # TBD: OSX does not seem to need this, linux does, not sure about others
  if platform == 'linux':
    unix_python_lib = '-lm -lutil ' + unix_python_lib

  win_python_lib_flags = 'libs'
  win_python_lib = '-lPython%s' % (python_version.replace('.', ''))

  if platform[:3] == 'win':
    python_lib_flags = win_python_lib_flags
    python_lib = win_python_lib
  else:
    python_lib_flags = unix_python_lib_flags
    python_lib = unix_python_lib
    
  if (os.path.exists(env_file)):
    env_backup = '%s/%s/environment.bak' % (ccpnmr_rel_dir, api_rel_dir)
    if (os.path.exists(env_backup)):
      os.remove(env_backup)
    doPrint('Backing up %s to %s' % (env_file, env_backup))
    os.rename(env_file, env_backup)

  fp = open(env_file, 'w')
  fp.write('''
# should work if suitably edited for Linux, Irix, Solaris, OSX, Windows

# the C compiler
CC = cc

# compiler flags

CFLAGS = -O -Wl,-E
 
# API
API_LIB = -lccp

# Python
PYTHON_DIR = %s
PYTHON_INCLUDE_FLAGS = -I$(PYTHON_DIR)/include/python%s
PYTHON_LIB_FLAGS = -L$(PYTHON_DIR)/%s
PYTHON_LIB = %s
# for Unix seem to need below
#PYTHON_LIB_FLAGS = -L$(PYTHON_DIR)/%s
#PYTHON_LIB = %s
# for Windows seem to need below
#PYTHON_LIB_FLAGS = -L$(PYTHON_DIR)/%s
#PYTHON_LIB = %s
''' % (python_abs_dir, python_version,
       python_lib_flags, python_lib,
       unix_python_lib_flags, unix_python_lib,
       win_python_lib_flags, win_python_lib))

  fp.close()

def compileDistribution(python_abs_dir):
 
  # need to make sure picking up correct Python before compiling Analysis
  path = os.environ.get('PATH')
  if (path):
    path = '%s:%s' % (python_abs_dir, path)
  else:
    path = python_abs_dir
  os.environ['PATH'] = path

  directory = os.path.join(ccpnmr_rel_dir, api_rel_dir)
  os.chdir(directory)

  if not os.path.exists('lib'):
    os.mkdir('lib')

  doPrint('distribution make')
  cmds = ['make']
  runCmds(cmds)

  doPrint('distribution make examples')
  cmds = ['make examples']
  runCmds(cmds)

  os.chdir(top_dir)

def dirContainsFiles(dir, files, allowMultiDirs):

  if allowMultiDirs:
    dirs = string.split(dir, ':')
  else:
    dirs = [dir]

  for file in files:
    foundMatch = 0
    for dir in dirs:
      if (file[-1] == '*'):
        file = file[:-1]
        (d, t) = os.path.split(file)
        d = os.path.join(dir, d)
        try:
          fs = os.listdir(d)
        except:
          continue
        for f in fs:
          if (f[:len(t)] == t):
            foundMatch = 1
            break
        if (foundMatch):
          break
      else:
        fullfile = os.path.join(dir, file)
        if (os.path.exists(fullfile)):
          foundMatch = 1
          break
    if (not foundMatch):
      return 0

  return 1

def allFilesFound(dir, reqdInclFiles, reqdLibFiles, allowMultiDirs):

  inclDir = '%s/%s' % (dir, include_dir)

  if not dirContainsFiles(inclDir, reqdInclFiles, allowMultiDirs):
    return None
 
  for lib_dir in lib_dirs:
    libDir = '%s/%s' % (dir, lib_dir)
    if dirContainsFiles(libDir, reqdLibFiles, allowMultiDirs):
      return (dir, lib_dir)

  return None

def getCodeDirs(code, sysDir, relDir, reqdInclFiles, reqdLibFiles, allowMultiDirs = 0):

  if allowMultiDirs:
    w = ' (use : to separate dirs if need more than one dir)'
  else:
    w = ''

  t = ''
  for dir in (relDir, sysDir):
    if dir:
      result = allFilesFound(dir, reqdInclFiles, reqdLibFiles, allowMultiDirs)
      if result:
        t = ', and %s does' % dir
        break

  if not t:
    dir = ''

  reqdFiles = '%s/[%s] and (%s)/[%s]' % (include_dir, string.join(reqdInclFiles, ', '),
                    string.join(lib_dirs, ' or '), string.join(reqdLibFiles, ', '))

  doPrint('Need to know where %s directory is, in order to compile %s' % (code, distribution))
  doPrint('(This directory should contain %s%s)' % (reqdFiles, t))
  if (dir):
    s = getInput('Guess %s dir = "%s", is this correct (y or n)?' % (code, dir))
    if (s == 'y'):
      result = allFilesFound(dir, reqdInclFiles, reqdLibFiles, allowMultiDirs)
      if result:
        return result
    else:
      dir = getInput('Where is the %s dir?%s [%s]' % (code, w, dir), doLower=0, default=dir)
  else:
    dir = getInput('Where is the %s dir?%s' % (code, w), doLower=0)

  result = allFilesFound(dir, reqdInclFiles, reqdLibFiles, allowMultiDirs)
  while (not result):
    doPrint('Could not find required files %s in %s' % (reqdFiles, dir))
    dir = getInput('Where is the %s dir?%s' % (code, w), doLower=0)
    result = allFilesFound(dir, reqdInclFiles, reqdLibFiles, allowMultiDirs)

  return result

def getCodeVersion(code, version, prefix, suffix = '', places = 3):

  (dir, tail) = os.path.split(prefix)
  n = len(tail)
  files = os.listdir(dir)
  foundVersions = []
  for file in files:
    if (file[:n] == tail):
      version = file[n:n+places]
      if version:
        try:
          foundVersions.append((float(version), version))
        except:
          pass

  if foundVersions:
    foundVersions.sort()
    foundVersions.reverse()
    version = foundVersions[0][1]
    s = getInput('Guess %s version = %s (by looking), is this ok (y or n) (reply y unless sure otherwise)?' % (code, version))
  else:
    s = 'n'

  if (s != 'y'):
    version = getInput('What %s version do you have (e.g. %s; %s%s%s or similar should exist)?' % (code, version, prefix, version, suffix), doLower=0)

  return version

def possiblyNeedMake():

  # just check the src/memops/universal directory (that is first that is compiled)

  directory = os.path.join(ccpnmr_rel_dir, api_rel_dir, 'src', 'memops', 'universal')
  files = os.listdir(directory)
  for file in files:
    if file[-2:] == '.o':
      return 1

  return 0

def makeClean():

  directory = os.path.join(ccpnmr_rel_dir, api_rel_dir)
  os.chdir(directory)

  cmds = ['make clean']
  runCmds(cmds)

  os.chdir(top_dir)

def main(log_file = None):

  global python_rel_dir
  global python_version, fp_log
  global lib_dirs

  if (log_file):
    fp_log = open(log_file, 'w')
  else:
    fp_log = None

  platform = getPlatform()

  if (platform == 'darwin'):
    sysDir = '/sw'
  else:
    sysDir = '/usr'

  if (platform != 'darwin'):
    s = getInput('Are you using 64 bit libraries? (answer n unless you know otherwise) (y or n))?')
    if (s[0] == 'y'):
      lib_dirs = ('lib64', 'lib')
    elif platform == 'irix':
      lib_dirs = ('lib32', 'lib')

  version = '0.0' # arbitrary
  while (float(version) < float(min_python_version)):
    python_abs_dir = '%s/%s' % (top_dir, python_rel_dir)
    python_lib_dir = 'lib'
    python_bin_dir = python_abs_dir

    flag = 1
    haveTar = havePythonTarFile()
    if haveTar:
      doPrint('You have choice of installing provided Python%s or using already installed Python.' % python_version)
      doPrint('It must be %s or higher, and it must have Tcl/Tk compiled in (latter not checked here).' % min_python_version)
      s = getInput('Unpack Python%s (y or n)?' % python_version)
      if (s[0] == 'y'):
        unpackPython()
      s = getInput('Compile and install Python%s (y or n)?' % python_version)
      if (s[0] == 'y'):
        compilePython()
        version = python_version
        flag = 0
    else:
      doPrint('CCPN Python gzipped tar file not found, assuming using existing Python')

    if flag:
      dir = python_rel_dir[:-1] + '*'
      (python_abs_dir, python_lib_dir) = getCodeDirs('Python', sysDir, python_abs_dir, (dir,), (dir,))
      python_bin_dir = python_abs_dir
      version = getCodeVersion('Python', python_version, '%s/include/python' % python_abs_dir)
      if (float(version) < float(min_python_version)):
        doPrint('Minimum Python usable is %s, try again.' % min_python_version)
      else:
        python_rel_dir = 'python%s' % version
        python_version = version

  if (distribution == capi_distribution):

    s = getInput('Compile and install %s code (y or n)?' % distribution)
    if (s[0] == 'y'):
      doPrint('You can create environment file from scratch (this does not copy it from environment_default.txt)')
      doPrint('If you have already created it and edited it by hand you probably do not want to create it again here.')
      s = getInput('Create environment file (y or n) (answer y unless you know otherwise)?')
      if (s[0] == 'y'):
        createEnvironmentFile(platform, python_abs_dir)

      if possiblyNeedMake():
        s = getInput('Do you want to leave existing compiled files (y or n) (answer y unless you know otherwise)?')
        if (s[0] == 'y'):
          makeClean()

      compileDistribution(python_abs_dir)

  directory = os.path.join(top_dir, ccpnmr_rel_dir, 'python')
  doPrint('To run programs you will need to include %s in PYTHONPATH environment variable' % directory)

  doPrint('Finished installation script')

  if (fp_log):
    fp_log.close()

if (__name__ == '__main__'):

  import sys

  if (ccpnmr_rel_dir is None):
    ccpnmr_rel_dir = 'ccpnmr2.0'

  top_dir = os.getcwd()

  if (len(sys.argv) >= 2):
    distribution = string.lower(sys.argv[1])
    
  if (distribution not in distributions):
    print 'Error: require one argument: distribution'
    print 'where distribution = one of %s' % str(distributions)
    sys.exit(1)

  n = 1
  log_file = 'log_%s_%d.txt' % (distribution, n)
  while (os.path.exists(log_file)):
    n = n + 1
    log_file = 'log_%s_%d.txt' % (distribution, n)
    
  print 'Messages will be logged in "%s"' % log_file
  main(log_file)
