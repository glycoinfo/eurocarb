include ../../../../../environment.txt

INCLUDE_FLAG = -I../../../../../include

OBJS = \
	Affi_AffiliationStore.o \
	Affi_Group.o \
	Affi_Organisation.o \
	Affi_Person.o \
	Affi_PersonInGroup.o


all: objects library

library:
	ar -r ../../../../../lib/libccp.a $(OBJS)

objects: $(OBJS)

.c.o:;	$(CC) -c $(CFLAGS) $(INCLUDE_FLAG) $(PYTHON_INCLUDE_FLAGS) $<
