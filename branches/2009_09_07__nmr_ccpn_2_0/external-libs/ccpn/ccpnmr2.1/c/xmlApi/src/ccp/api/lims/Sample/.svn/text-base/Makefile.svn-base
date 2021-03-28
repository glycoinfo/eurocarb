include ../../../../../environment.txt

INCLUDE_FLAG = -I../../../../../include

OBJS = \
	Sam_AbstractSample.o \
	Sam_CrystalSample.o \
	Sam_RefSample.o \
	Sam_RefSampleSource.o \
	Sam_Sample.o \
	Sam_SampleComponent.o \
	Sam_SampleStore.o


all: objects library

library:
	ar -r ../../../../../lib/libccp.a $(OBJS)

objects: $(OBJS)

.c.o:;	$(CC) -c $(CFLAGS) $(INCLUDE_FLAG) $(PYTHON_INCLUDE_FLAGS) $<

clean:
	rm *.o
