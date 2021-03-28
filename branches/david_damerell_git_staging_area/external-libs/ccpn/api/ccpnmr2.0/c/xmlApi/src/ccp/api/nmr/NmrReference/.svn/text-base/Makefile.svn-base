include ../../../../../environment.txt

INCLUDE_FLAG = -I../../../../../include

OBJS = \
	Nmrr_ChemAtomNmrRef.o \
	Nmrr_ChemAtomShiftCorr.o \
	Nmrr_ChemCompNmrRef.o \
	Nmrr_ChemCompVarNmrRef.o \
	Nmrr_NmrReferenceStore.o


all: objects library

library:
	ar -r ../../../../../lib/libccp.a $(OBJS)

objects: $(OBJS)

.c.o:;	$(CC) -c $(CFLAGS) $(INCLUDE_FLAG) $(PYTHON_INCLUDE_FLAGS) $<
