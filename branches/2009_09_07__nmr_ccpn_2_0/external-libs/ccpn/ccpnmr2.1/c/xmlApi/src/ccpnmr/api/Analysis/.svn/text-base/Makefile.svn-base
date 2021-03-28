include ../../../../environment.txt

INCLUDE_FLAG = -I../../../../include

OBJS = \
	Anal_AbstractMark.o \
	Anal_AnalysisDataDim.o \
	Anal_AnalysisPeakList.o \
	Anal_AnalysisPopup.o \
	Anal_AnalysisProject.o \
	Anal_AnalysisSpectrum.o \
	Anal_AtomSetMapping.o \
	Anal_AxisMapping.o \
	Anal_AxisPanel.o \
	Anal_AxisRegion.o \
	Anal_AxisRegionGroup.o \
	Anal_AxisType.o \
	Anal_AxisUnit.o \
	Anal_ChainMapping.o \
	Anal_Mark.o \
	Anal_MarkDim.o \
	Anal_PanelType.o \
	Anal_PopupOption.o \
	Anal_ResidueMapping.o \
	Anal_Ruler.o \
	Anal_SidePanel.o \
	Anal_SlicePanel.o \
	Anal_SpectrumWindow.o \
	Anal_SpectrumWindowGroup.o \
	Anal_SpectrumWindowPane.o \
	Anal_SpectrumWindowView.o \
	Anal_StoredContour.o \
	Anal_WindowPeakList.o


all: objects library

library:
	ar -r ../../../../lib/libccp.a $(OBJS)

objects: $(OBJS)

.c.o:;	$(CC) -c $(CFLAGS) $(INCLUDE_FLAG) $(PYTHON_INCLUDE_FLAGS) $<

clean:
	rm *.o
