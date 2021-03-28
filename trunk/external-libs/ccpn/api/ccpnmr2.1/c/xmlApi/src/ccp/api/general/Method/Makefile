include ../../../../../environment.txt

INCLUDE_FLAG = -I../../../../../include

OBJS = \
	Meth_Method.o \
	Meth_MethodStore.o \
	Meth_Parameter.o \
	Meth_Software.o


all: objects library

library:
	ar -r ../../../../../lib/libccp.a $(OBJS)

objects: $(OBJS)

.c.o:;	$(CC) -c $(CFLAGS) $(INCLUDE_FLAG) $(PYTHON_INCLUDE_FLAGS) $<

clean:
	rm *.o
