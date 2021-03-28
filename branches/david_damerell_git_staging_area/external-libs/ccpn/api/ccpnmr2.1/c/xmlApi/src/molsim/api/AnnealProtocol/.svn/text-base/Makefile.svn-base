include ../../../../environment.txt

INCLUDE_FLAG = -I../../../../include

OBJS = \
	Anpr_AnnealProtocol.o \
	Anpr_AnnealProtocolStore.o \
	Anpr_AnnealStage.o \
	Anpr_EnergyTerm.o \
	Anpr_PotentialScale.o \
	Anpr_RefPotentialTerm.o \
	Anpr_RefTermParameter.o


all: objects library

library:
	ar -r ../../../../lib/libccp.a $(OBJS)

objects: $(OBJS)

.c.o:;	$(CC) -c $(CFLAGS) $(INCLUDE_FLAG) $(PYTHON_INCLUDE_FLAGS) $<

clean:
	rm *.o
