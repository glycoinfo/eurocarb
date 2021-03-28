include ../../../../../environment.txt

INCLUDE_FLAG = -I../../../../../include

OBJS = \
	Calc_ConstraintStoreData.o \
	Calc_Data.o \
	Calc_DefaultParameter.o \
	Calc_DerivedListData.o \
	Calc_ExternalData.o \
	Calc_MeasurementListData.o \
	Calc_MolResidueData.o \
	Calc_MolSystemData.o \
	Calc_NmrCalcStore.o \
	Calc_PeakListData.o \
	Calc_Run.o \
	Calc_RunParameter.o \
	Calc_SpectrumData.o \
	Calc_SpinSystemData.o \
	Calc_StructureEnsembleData.o \
	Calc_ViolationListData.o


all: objects library

library:
	ar -r ../../../../../lib/libccp.a $(OBJS)

objects: $(OBJS)

.c.o:;	$(CC) -c $(CFLAGS) $(INCLUDE_FLAG) $(PYTHON_INCLUDE_FLAGS) $<

clean:
	rm *.o
