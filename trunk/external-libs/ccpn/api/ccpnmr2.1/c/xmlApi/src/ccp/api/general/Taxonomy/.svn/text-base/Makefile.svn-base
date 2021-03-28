include ../../../../../environment.txt

INCLUDE_FLAG = -I../../../../../include

OBJS = \
	Taxo_NaturalSource.o \
	Taxo_Taxonomy.o


all: objects library

library:
	ar -r ../../../../../lib/libccp.a $(OBJS)

objects: $(OBJS)

.c.o:;	$(CC) -c $(CFLAGS) $(INCLUDE_FLAG) $(PYTHON_INCLUDE_FLAGS) $<

clean:
	rm *.o
