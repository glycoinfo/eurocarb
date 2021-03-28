include ../../../../environment.txt

INCLUDE_FLAG = -I../../../../include

OBJS = \
	Impl_AppDataBoolean.o \
	Impl_AppDataDouble.o \
	Impl_AppDataFloat.o \
	Impl_AppDataInt.o \
	Impl_AppDataLong.o \
	Impl_AppDataString.o \
	Impl_ApplicationData.o \
	Impl_ComplexDataType.o \
	Impl_DataObject.o \
	Impl_ImplementationObject.o \
	Impl_MemopsObject.o \
	Impl_MemopsRoot.o \
	Impl_PackageLocator.o \
	Impl_Repository.o \
	Impl_SymmTracelessMatrix.o \
	Impl_TopObject.o \
	Impl_Url.o


all: objects library

library:
	ar -r ../../../../lib/libccp.a $(OBJS)

objects: $(OBJS)

.c.o:;  $(CC) -c $(CFLAGS) $(INCLUDE_FLAG) $(PYTHON_INCLUDE_FLAGS) $<

