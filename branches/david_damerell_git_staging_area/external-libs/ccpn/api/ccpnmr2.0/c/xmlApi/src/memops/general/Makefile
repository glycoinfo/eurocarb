include ../../../environment.txt

INCLUDE_FLAG = -I../../../include

OBJS = \
	ApiBoolean.o \
	ApiDouble.o \
	ApiException.o \
	ApiFloat.o \
	ApiInteger.o \
	ApiList.o \
	ApiLong.o \
	ApiMap.o \
	ApiObject.o \
	ApiSet.o \
	ApiString.o \
	MemopsGeneralIo.o \
	MemopsGeneralUtil.o 


all: objects library

library:
	ar -r ../../../lib/libccp.a $(OBJS)

objects: $(OBJS)

MemopsGeneralIo.o: Io.c
	$(CC) -c $(CFLAGS) $(INCLUDE_FLAG) $(PYTHON_INCLUDE_FLAGS) -o MemopsGeneralIo.o Io.c

MemopsGeneralUtil.o: Util.c
	$(CC) -c $(CFLAGS) $(INCLUDE_FLAG) $(PYTHON_INCLUDE_FLAGS) -o MemopsGeneralUtil.o Util.c

.c.o:;	$(CC) -c $(CFLAGS) $(INCLUDE_FLAG) $(PYTHON_INCLUDE_FLAGS) $<

clean:
	rm *.o

