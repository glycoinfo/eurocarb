include ../../../../../environment.txt

INCLUDE_FLAG = -I../../../../../include

OBJS = \
	Targ_Project.o \
	Targ_Target.o \
	Targ_TargetGroup.o \
	Targ_TargetStatus.o \
	Targ_TargetStore.o


all: objects library

library:
	ar -r ../../../../../lib/libccp.a $(OBJS)

objects: $(OBJS)

.c.o:;	$(CC) -c $(CFLAGS) $(INCLUDE_FLAG) $(PYTHON_INCLUDE_FLAGS) $<
