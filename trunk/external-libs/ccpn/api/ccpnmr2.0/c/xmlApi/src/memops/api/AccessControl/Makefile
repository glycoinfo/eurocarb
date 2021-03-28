include ../../../../environment.txt

INCLUDE_FLAG = -I../../../../include

OBJS = \
	Acco_AccessControlStore.o \
	Acco_AccessObject.o \
	Acco_Permission.o \
	Acco_User.o \
	Acco_UserGroup.o


all: objects library

library:
	ar -r ../../../../lib/libccp.a $(OBJS)

objects: $(OBJS)

.c.o:;	$(CC) -c $(CFLAGS) $(INCLUDE_FLAG) $(PYTHON_INCLUDE_FLAGS) $<
