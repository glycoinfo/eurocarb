include ../../../../../environment.txt

INCLUDE_FLAG = -I../../../../../include

OBJS = \
	Nmrc_AbstractConstraint.o \
	Nmrc_AbstractConstraintList.o \
	Nmrc_ChainStateLink.o \
	Nmrc_ChemShiftConstraint.o \
	Nmrc_ChemShiftConstraintList.o \
	Nmrc_ConditionState.o \
	Nmrc_ConstraintGroup.o \
	Nmrc_ConstraintPeakContrib.o \
	Nmrc_CsaConstraint.o \
	Nmrc_CsaConstraintList.o \
	Nmrc_DihedralConstraint.o \
	Nmrc_DihedralConstraintItem.o \
	Nmrc_DihedralConstraintList.o \
	Nmrc_DistanceConstraint.o \
	Nmrc_DistanceConstraintItem.o \
	Nmrc_DistanceConstraintList.o \
	Nmrc_FixedAtomSet.o \
	Nmrc_FixedResonance.o \
	Nmrc_FixedResonanceSet.o \
	Nmrc_HBondConstraint.o \
	Nmrc_HBondConstraintItem.o \
	Nmrc_HBondConstraintList.o \
	Nmrc_JCouplingConstraint.o \
	Nmrc_JCouplingConstraintItem.o \
	Nmrc_JCouplingConstraintList.o \
	Nmrc_NmrConstraintStore.o \
	Nmrc_PairwiseConstraintItem.o \
	Nmrc_RdcConstraint.o \
	Nmrc_RdcConstraintItem.o \
	Nmrc_RdcConstraintList.o \
	Nmrc_ResCoord.o \
	Nmrc_ResStructure.o \
	Nmrc_SingleConstraint.o \
	Nmrc_Violation.o \
	Nmrc_ViolationList.o


all: objects library

library:
	ar -r ../../../../../lib/libccp.a $(OBJS)

objects: $(OBJS)

.c.o:;	$(CC) -c $(CFLAGS) $(INCLUDE_FLAG) $(PYTHON_INCLUDE_FLAGS) $<

clean:
	rm *.o
