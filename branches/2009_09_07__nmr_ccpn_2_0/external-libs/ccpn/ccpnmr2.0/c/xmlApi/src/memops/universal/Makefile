include ../../../environment.txt

INCLUDE_FLAG = -I../../../include

OBJS = \
	MemopsUniversalIo.o \
	MemopsUniversalUtil.o 

all: objects library

library:
	ar -r ../../../lib/libccp.a $(OBJS)

objects: $(OBJS)

MemopsUniversalIo.o: Io.c
	$(CC) -c $(CFLAGS) $(INCLUDE_FLAG) $(PYTHON_INCLUDE_FLAGS) -o MemopsUniversalIo.o Io.c

MemopsUniversalUtil.o: Util.c
	$(CC) -c $(CFLAGS) $(INCLUDE_FLAG) $(PYTHON_INCLUDE_FLAGS) -o MemopsUniversalUtil.o Util.c

clean:
	rm *.o

