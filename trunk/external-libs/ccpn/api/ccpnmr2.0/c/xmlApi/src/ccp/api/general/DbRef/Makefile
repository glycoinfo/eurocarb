include ../../../../../environment.txt

INCLUDE_FLAG = -I../../../../../include

OBJS = \
	Dbr_Database.o \
	Dbr_Entry.o


all: objects library

library:
	ar -r ../../../../../lib/libccp.a $(OBJS)

objects: $(OBJS)

.c.o:;	$(CC) -c $(CFLAGS) $(INCLUDE_FLAG) $(PYTHON_INCLUDE_FLAGS) $<
