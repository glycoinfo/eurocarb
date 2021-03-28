include ../../../../../environment.txt

INCLUDE_FLAG = -I../../../../../include

OBJS = \
	Inst_AbstractInstrument.o \
	Inst_Column.o \
	Inst_Instrument.o \
	Inst_InstrumentStore.o \
	Inst_NmrProbe.o \
	Inst_NmrSpectrometer.o


all: objects library

library:
	ar -r ../../../../../lib/libccp.a $(OBJS)

objects: $(OBJS)

.c.o:;	$(CC) -c $(CFLAGS) $(INCLUDE_FLAG) $(PYTHON_INCLUDE_FLAGS) $<

clean:
	rm *.o
