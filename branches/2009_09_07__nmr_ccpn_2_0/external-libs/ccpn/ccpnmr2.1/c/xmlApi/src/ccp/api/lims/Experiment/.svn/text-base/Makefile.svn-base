include ../../../../../environment.txt

INCLUDE_FLAG = -I../../../../../include

OBJS = \
	Expe_Experiment.o \
	Expe_ExperimentGroup.o \
	Expe_ExperimentStore.o \
	Expe_ImportSample.o \
	Expe_InputSample.o \
	Expe_OutputSample.o \
	Expe_Parameter.o


all: objects library

library:
	ar -r ../../../../../lib/libccp.a $(OBJS)

objects: $(OBJS)

.c.o:;	$(CC) -c $(CFLAGS) $(INCLUDE_FLAG) $(PYTHON_INCLUDE_FLAGS) $<

clean:
	rm *.o
