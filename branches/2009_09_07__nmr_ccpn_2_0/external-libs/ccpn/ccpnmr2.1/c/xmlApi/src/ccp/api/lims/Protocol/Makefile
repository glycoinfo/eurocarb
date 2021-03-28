include ../../../../../environment.txt

INCLUDE_FLAG = -I../../../../../include

OBJS = \
	Prot_AddStep.o \
	Prot_CentrifugationStep.o \
	Prot_FiltrationStep.o \
	Prot_FlowStep.o \
	Prot_ParameterDefinition.o \
	Prot_PressStep.o \
	Prot_Procedure.o \
	Prot_Protocol.o \
	Prot_ProtocolStore.o \
	Prot_RefInputSample.o \
	Prot_RefOutputSample.o \
	Prot_SonicationStep.o \
	Prot_Step.o \
	Prot_TemperatureStep.o \
	Prot_WaitStep.o


all: objects library

library:
	ar -r ../../../../../lib/libccp.a $(OBJS)

objects: $(OBJS)

.c.o:;	$(CC) -c $(CFLAGS) $(INCLUDE_FLAG) $(PYTHON_INCLUDE_FLAGS) $<

clean:
	rm *.o
