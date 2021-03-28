include ../../../../../environment.txt

INCLUDE_FLAG = -I../../../../../include

OBJS = \
	Refs_AbstractComponent.o \
	Refs_Cell.o \
	Refs_ComponentDbRef.o \
	Refs_Composite.o \
	Refs_CompositeElement.o \
	Refs_CompositeInteraction.o \
	Refs_Construct.o \
	Refs_IsotopeLabel.o \
	Refs_Label.o \
	Refs_MolCompFeature.o \
	Refs_MolComponent.o \
	Refs_Primer.o \
	Refs_RefSampleComponentStore.o \
	Refs_RestrictionEnzyme.o \
	Refs_SpecificLabelGroup.o \
	Refs_Substance.o


all: objects library

library:
	ar -r ../../../../../lib/libccp.a $(OBJS)

objects: $(OBJS)

.c.o:;	$(CC) -c $(CFLAGS) $(INCLUDE_FLAG) $(PYTHON_INCLUDE_FLAGS) $<

clean:
	rm *.o
