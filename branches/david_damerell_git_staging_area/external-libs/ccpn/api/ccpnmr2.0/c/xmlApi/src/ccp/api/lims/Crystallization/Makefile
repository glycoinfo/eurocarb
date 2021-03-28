include ../../../../../environment.txt

INCLUDE_FLAG = -I../../../../../include

OBJS = \
	Cryz_CrystallizationStore.o \
	Cryz_DropAnnotation.o \
	Cryz_Image.o \
	Cryz_Parameter.o \
	Cryz_ParameterDefinition.o \
	Cryz_Score.o \
	Cryz_ScoringScheme.o


all: objects library

library:
	ar -r ../../../../../lib/libccp.a $(OBJS)

objects: $(OBJS)

.c.o:;	$(CC) -c $(CFLAGS) $(INCLUDE_FLAG) $(PYTHON_INCLUDE_FLAGS) $<
