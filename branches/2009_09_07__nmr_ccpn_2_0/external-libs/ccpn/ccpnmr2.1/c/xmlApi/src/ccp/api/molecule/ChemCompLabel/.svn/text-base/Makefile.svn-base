include ../../../../../environment.txt

INCLUDE_FLAG = -I../../../../../include

OBJS = \
	Cclb_AtomLabel.o \
	Cclb_ChemCompLabel.o \
	Cclb_Isotopomer.o \
	Cclb_LabelingScheme.o


all: objects library

library:
	ar -r ../../../../../lib/libccp.a $(OBJS)

objects: $(OBJS)

.c.o:;	$(CC) -c $(CFLAGS) $(INCLUDE_FLAG) $(PYTHON_INCLUDE_FLAGS) $<

clean:
	rm *.o
