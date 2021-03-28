include ../../../../../environment.txt

INCLUDE_FLAG = -I../../../../../include

OBJS = \
	Cita_BookCitation.o \
	Cita_Citation.o \
	Cita_CitationStore.o \
	Cita_ConferenceCitation.o \
	Cita_JournalCitation.o \
	Cita_ThesisCitation.o


all: objects library

library:
	ar -r ../../../../../lib/libccp.a $(OBJS)

objects: $(OBJS)

.c.o:;	$(CC) -c $(CFLAGS) $(INCLUDE_FLAG) $(PYTHON_INCLUDE_FLAGS) $<

clean:
	rm *.o
