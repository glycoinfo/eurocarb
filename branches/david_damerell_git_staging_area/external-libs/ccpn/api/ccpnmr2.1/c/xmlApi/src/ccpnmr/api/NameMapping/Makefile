include ../../../../environment.txt

INCLUDE_FLAG = -I../../../../include

OBJS = \
	Nmap_AtomMapping.o \
	Nmap_ChainMapping.o \
	Nmap_MoleculeMapping.o \
	Nmap_NameMapping.o \
	Nmap_NameMappingStore.o \
	Nmap_ResonanceLinkMapping.o \
	Nmap_ResonanceStatusMapping.o


all: objects library

library:
	ar -r ../../../../lib/libccp.a $(OBJS)

objects: $(OBJS)

.c.o:;	$(CC) -c $(CFLAGS) $(INCLUDE_FLAG) $(PYTHON_INCLUDE_FLAGS) $<

clean:
	rm *.o
