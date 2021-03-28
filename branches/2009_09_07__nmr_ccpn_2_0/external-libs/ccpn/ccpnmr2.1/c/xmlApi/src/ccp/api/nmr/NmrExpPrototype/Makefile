include ../../../../../environment.txt

INCLUDE_FLAG = -I../../../../../include

OBJS = \
	Nmrx_AtomSite.o \
	Nmrx_ExpGraph.o \
	Nmrx_ExpMeasurement.o \
	Nmrx_ExpStep.o \
	Nmrx_ExpTransfer.o \
	Nmrx_NmrExpPrototype.o \
	Nmrx_RefExpDim.o \
	Nmrx_RefExpDimRef.o \
	Nmrx_RefExperiment.o \
	Nmrx_SystematicName.o


all: objects library

library:
	ar -r ../../../../../lib/libccp.a $(OBJS)

objects: $(OBJS)

.c.o:;	$(CC) -c $(CFLAGS) $(INCLUDE_FLAG) $(PYTHON_INCLUDE_FLAGS) $<

clean:
	rm *.o
