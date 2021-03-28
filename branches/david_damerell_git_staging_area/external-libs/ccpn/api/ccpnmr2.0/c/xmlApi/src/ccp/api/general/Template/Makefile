include ../../../../../environment.txt

INCLUDE_FLAG = -I../../../../../include

OBJS = \
	Temp_AbstractProbability.o \
	Temp_MultiTypeValue.o \
	Temp_MultiTypesValue.o


all: objects library

library:
	ar -r ../../../../../lib/libccp.a $(OBJS)

objects: $(OBJS)

.c.o:;	$(CC) -c $(CFLAGS) $(INCLUDE_FLAG) $(PYTHON_INCLUDE_FLAGS) $<
