include ../../../../../environment.txt

INCLUDE_FLAG = -I../../../../../include

OBJS = \
	Nmr_AbstractDataDerivation.o \
	Nmr_AbstractDataDim.o \
	Nmr_AbstractMeasurement.o \
	Nmr_AbstractMeasurementList.o \
	Nmr_AbstractPeakDimContrib.o \
	Nmr_AtomSet.o \
	Nmr_ChainState.o \
	Nmr_ChainStateSet.o \
	Nmr_DataDerivation.o \
	Nmr_DataDimRef.o \
	Nmr_DataList.o \
	Nmr_DataSource.o \
	Nmr_DataSourceImage.o \
	Nmr_Datum.o \
	Nmr_DerivedData.o \
	Nmr_DerivedDataList.o \
	Nmr_DimensionScaling.o \
	Nmr_DipolarRelaxList.o \
	Nmr_DipolarRelaxation.o \
	Nmr_ExpChainState.o \
	Nmr_ExpDim.o \
	Nmr_ExpDimRef.o \
	Nmr_ExpDimRefMapping.o \
	Nmr_ExpTransfer.o \
	Nmr_Experiment.o \
	Nmr_ExternalShiftReference.o \
	Nmr_FidDataDim.o \
	Nmr_FreqDataDim.o \
	Nmr_HExchProtection.o \
	Nmr_HExchProtectionList.o \
	Nmr_HExchRate.o \
	Nmr_HExchRateList.o \
	Nmr_InternalShiftReference.o \
	Nmr_IsotropicS2.o \
	Nmr_IsotropicS2Derivation.o \
	Nmr_IsotropicS2List.o \
	Nmr_JCoupling.o \
	Nmr_JCouplingList.o \
	Nmr_NmrExpSeries.o \
	Nmr_NmrProject.o \
	Nmr_Noe.o \
	Nmr_NoeList.o \
	Nmr_PKaDerivation.o \
	Nmr_Peak.o \
	Nmr_PeakCluster.o \
	Nmr_PeakContrib.o \
	Nmr_PeakDim.o \
	Nmr_PeakDimComponent.o \
	Nmr_PeakDimContrib.o \
	Nmr_PeakDimContribN.o \
	Nmr_PeakIntensity.o \
	Nmr_PeakList.o \
	Nmr_Pka.o \
	Nmr_PkaList.o \
	Nmr_Rdc.o \
	Nmr_RdcList.o \
	Nmr_ResidueProb.o \
	Nmr_ResidueTypeProb.o \
	Nmr_Resonance.o \
	Nmr_ResonanceGroup.o \
	Nmr_ResonanceGroupProb.o \
	Nmr_ResonanceProb.o \
	Nmr_ResonanceSet.o \
	Nmr_SampleCondition.o \
	Nmr_SampleConditionSet.o \
	Nmr_SampledDataDim.o \
	Nmr_Shift.o \
	Nmr_ShiftAnisotropy.o \
	Nmr_ShiftAnisotropyList.o \
	Nmr_ShiftDifference.o \
	Nmr_ShiftDifferenceList.o \
	Nmr_ShiftList.o \
	Nmr_ShiftReference.o \
	Nmr_SparseSampling.o \
	Nmr_SpectralDensity.o \
	Nmr_SpectralDensityDerivation.o \
	Nmr_SpectralDensityList.o \
	Nmr_StructureAnalysis.o \
	Nmr_StructureGeneration.o \
	Nmr_T1.o \
	Nmr_T1List.o \
	Nmr_T1Rho.o \
	Nmr_T1rhoList.o \
	Nmr_T2.o \
	Nmr_T2List.o


all: objects library

library:
	ar -r ../../../../../lib/libccp.a $(OBJS)

objects: $(OBJS)

.c.o:;	$(CC) -c $(CFLAGS) $(INCLUDE_FLAG) $(PYTHON_INCLUDE_FLAGS) $<

clean:
	rm *.o
