include ../../../../environment.txt

INCLUDE_FLAG = -I../../../../include

OBJS = \
	Symm_MolSystemSymmetrySet.o \
	Symm_Segment.o \
	Symm_Symmetry.o


all: objects library

library:
	ar -r ../../../../lib/libccp.a $(OBJS)

objects: $(OBJS)

.c.o:;	$(CC) -c $(CFLAGS) $(INCLUDE_FLAG) $(PYTHON_INCLUDE_FLAGS) $<
