include ../../../../../environment.txt

INCLUDE_FLAG = -I../../../../../include

OBJS = \
	Entr_Entry.o \
	Entr_NmrEntryStore.o \
	Entr_RelatedEntry.o \
	Entr_Study.o


all: objects library

library:
	ar -r ../../../../../lib/libccp.a $(OBJS)

objects: $(OBJS)

.c.o:;	$(CC) -c $(CFLAGS) $(INCLUDE_FLAG) $(PYTHON_INCLUDE_FLAGS) $<
