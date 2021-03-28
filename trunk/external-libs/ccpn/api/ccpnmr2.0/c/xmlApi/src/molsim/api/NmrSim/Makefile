include ../../../../environment.txt

INCLUDE_FLAG = -I../../../../include

OBJS = \
	Nsim_EnergyTermParameter.o \
	Nsim_NmrSimEnergyTerm.o \
	Nsim_NmrSimStore.o \
	Nsim_Run.o \
	Nsim_RunParameter.o


all: objects library

library:
	ar -r ../../../../lib/libccp.a $(OBJS)

objects: $(OBJS)

.c.o:;	$(CC) -c $(CFLAGS) $(INCLUDE_FLAG) $(PYTHON_INCLUDE_FLAGS) $<
