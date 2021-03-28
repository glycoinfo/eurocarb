include ../../../../../environment.txt

INCLUDE_FLAG = -I../../../../../include

OBJS = \
	Hold_AbstractHolderType.o \
	Hold_Holder.o \
	Hold_HolderLocation.o \
	Hold_HolderStore.o \
	Hold_HolderType.o \
	Hold_HolderTypePosition.o \
	Hold_PinType.o \
	Hold_RefSamplePosition.o


all: objects library

library:
	ar -r ../../../../../lib/libccp.a $(OBJS)

objects: $(OBJS)

.c.o:;	$(CC) -c $(CFLAGS) $(INCLUDE_FLAG) $(PYTHON_INCLUDE_FLAGS) $<

clean:
	rm *.o
