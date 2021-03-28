from ccpnmr.update.UpdateAgent import UpdateAgent, UPDATE_SERVER_LOCATION, UPDATE_DIRECTORY, UPDATE_DATABASE_FILE

def updateAuto(serverLocation=UPDATE_SERVER_LOCATION,
               serverDirectory=UPDATE_DIRECTORY,
               dataFile=UPDATE_DATABASE_FILE):

  updateAgent = UpdateAgent(serverLocation, serverDirectory, dataFile, isGraphical=False)
  server = updateAgent.server
  if server:
      server.getFileUpdates()
      if not server.fileUpdates:
        server.getFileUpdates()
      if server.fileUpdates:
        updateAgent.installNewUpdates()  
    
if __name__ == '__main__':

  updateAuto()
