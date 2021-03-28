include ../../../environment.txt

INCLUDE_FLAG = -I../../../include

OBJS = \
	CcpGeneralIo.o 

all: objects library

library:
	ar -r ../../../lib/libccp.a $(OBJS)

objects: $(OBJS)

CcpGeneralIo.o: Io.c
	$(CC) -c $(CFLAGS) $(INCLUDE_FLAG) $(PYTHON_INCLUDE_FLAGS) -o CcpGeneralIo.o Io.c

clean:
	rm *.o

