include ../../../../../environment.txt

INCLUDE_FLAG = -I../../../../../include

OBJS = \
	Expb_BlueprintComponent.o \
	Expb_BlueprintDbRef.o \
	Expb_BlueprintStatus.o \
	Expb_ExpBlueprint.o \
	Expb_ExpBlueprintStore.o


all: objects library

library:
	ar -r ../../../../../lib/libccp.a $(OBJS)

objects: $(OBJS)

.c.o:;	$(CC) -c $(CFLAGS) $(INCLUDE_FLAG) $(PYTHON_INCLUDE_FLAGS) $<
