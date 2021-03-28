include ../../../../../environment.txt

INCLUDE_FLAG = -I../../../../../include

OBJS = \
	Ccco_ChemAtomCoord.o \
	Ccco_ChemCompCoord.o \
	Ccco_ChemCompVarCoord.o


all: objects library

library:
	ar -r ../../../../../lib/libccp.a $(OBJS)

objects: $(OBJS)

.c.o:;	$(CC) -c $(CFLAGS) $(INCLUDE_FLAG) $(PYTHON_INCLUDE_FLAGS) $<

clean:
	rm *.o
