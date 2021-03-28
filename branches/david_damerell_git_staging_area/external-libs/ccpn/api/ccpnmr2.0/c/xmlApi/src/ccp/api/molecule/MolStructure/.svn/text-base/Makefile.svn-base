include ../../../../../environment.txt

INCLUDE_FLAG = -I../../../../../include

OBJS = \
	Coor_Atom.o \
	Coor_Chain.o \
	Coor_Coord.o \
	Coor_Model.o \
	Coor_Residue.o \
	Coor_StructureEnsemble.o


all: objects library

library:
	ar -r ../../../../../lib/libccp.a $(OBJS)

objects: $(OBJS)

.c.o:;	$(CC) -c $(CFLAGS) $(INCLUDE_FLAG) $(PYTHON_INCLUDE_FLAGS) $<
