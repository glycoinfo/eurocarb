include ../../../../../environment.txt

INCLUDE_FLAG = -I../../../../../include

OBJS = \
	Vald_AtomValidation.o \
	Vald_ChainValidation.o \
	Vald_EnsembleValidation.o \
	Vald_EntryValidation.o \
	Vald_MolSysAtomValidation.o \
	Vald_MolSysChainValidation.o \
	Vald_MolSysResidueValidation.o \
	Vald_MolSystemValidation.o \
	Vald_NmrConstraintListValidation.o \
	Vald_NmrConstraintValidation.o \
	Vald_NmrMeasurementListValidation.o \
	Vald_NmrMeasurementValidation.o \
	Vald_PeakListValidation.o \
	Vald_PeakValidation.o \
	Vald_ResidueValidation.o \
	Vald_StructureValidation.o \
	Vald_ValidationResult.o \
	Vald_ValidationStore.o


all: objects library

library:
	ar -r ../../../../../lib/libccp.a $(OBJS)

objects: $(OBJS)

.c.o:;	$(CC) -c $(CFLAGS) $(INCLUDE_FLAG) $(PYTHON_INCLUDE_FLAGS) $<

clean:
	rm *.o
