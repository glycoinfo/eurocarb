include ../../../environment.txt

API_INCLUDE_FLAG = -I../../../include
API_LIB_FLAG = -L../../../lib
API_LIB = -lccp

PROGRAMS = \
	createProject \
	cloneUrl \
	loadProject \
	saveProject \
	listExperiments \
	createCarbMolecules  \
	getSequenceInfo      \
	getChemicalShiftInfo

LFLAGS = $(API_LIB_FLAG) $(PYTHON_LIB_FLAGS)
# probably use below for Linux (and anything else??)
#LFLAGS = $(API_LIB_FLAG) $(PYTHON_LIB_FLAGS) -Wl,-E

LIBS = $(API_LIB) $(PYTHON_LIB)

all: programs

programs: $(PROGRAMS)

createProject: createProject.o
	cc $(LFLAGS) -o $@ createProject.o $(LIBS)

cloneUrl: cloneUrl.o
	cc $(LFLAGS) -o $@ cloneUrl.o $(LIBS)

loadProject: loadProject.o
	cc $(LFLAGS) -o $@ loadProject.o $(LIBS)

saveProject: saveProject.o
	cc $(LFLAGS) -o $@ saveProject.o $(LIBS)

listExperiments: listExperiments.o
	cc $(LFLAGS) -o $@ listExperiments.o $(LIBS)

createCarbMolecules: createCarbMolecules.o
	$(CC) $(LFLAGS) -o $@ createCarbMolecules.o $(LIBS)

getSequenceInfo: getSequenceInfo.o
	$(CC) $(LFLAGS) -o $@ getSequenceInfo.o $(LIBS)

getChemicalShiftInfo: getChemicalShiftInfo.o
	$(CC) $(LFLAGS) -o $@ getChemicalShiftInfo.o $(LIBS)

.c.o:;	$(CC) -c $(CFLAGS) $(API_INCLUDE_FLAG) $(PYTHON_INCLUDE_FLAGS) -o $@ $<

clean:
	rm *.o

realclean: clean
	rm $(PROGRAMS)

