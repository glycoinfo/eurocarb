include ../../../../../environment.txt

INCLUDE_FLAG = -I../../../../../include

OBJS = \
	Clas_AbstractCategory.o \
	Clas_Classification.o \
	Clas_ExperimentType.o \
	Clas_HazardPhrase.o \
	Clas_HolderCategory.o \
	Clas_InstrumentType.o \
	Clas_SampleCategory.o \
	Clas_SampleComponentCategory.o \
	Clas_TargetScoreboard.o \
	Clas_TargetStatus.o


all: objects library

library:
	ar -r ../../../../../lib/libccp.a $(OBJS)

objects: $(OBJS)

.c.o:;	$(CC) -c $(CFLAGS) $(INCLUDE_FLAG) $(PYTHON_INCLUDE_FLAGS) $<

clean:
	rm *.o
