include ../../../../../environment.txt

INCLUDE_FLAG = -I../../../../../include

OBJS = \
	Dloc_AbstractDataStore.o \
	Dloc_BlockedBinaryMatrix.o \
	Dloc_ComponentShape.o \
	Dloc_DataLocationStore.o \
	Dloc_DataUrl.o \
	Dloc_MimeTypeDataStore.o \
	Dloc_NumericMatrix.o \
	Dloc_ShapeMatrix.o


all: objects library

library:
	ar -r ../../../../../lib/libccp.a $(OBJS)

objects: $(OBJS)

.c.o:;	$(CC) -c $(CFLAGS) $(INCLUDE_FLAG) $(PYTHON_INCLUDE_FLAGS) $<
