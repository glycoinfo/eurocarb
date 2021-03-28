include ../../../../../environment.txt

INCLUDE_FLAG = -I../../../../../include

OBJS = \
	Kwdf_KeywordDefinition.o \
	Kwdf_KeywordDefinitionStore.o


all: objects library

library:
	ar -r ../../../../../lib/libccp.a $(OBJS)

objects: $(OBJS)

.c.o:;	$(CC) -c $(CFLAGS) $(INCLUDE_FLAG) $(PYTHON_INCLUDE_FLAGS) $<

clean:
	rm *.o
