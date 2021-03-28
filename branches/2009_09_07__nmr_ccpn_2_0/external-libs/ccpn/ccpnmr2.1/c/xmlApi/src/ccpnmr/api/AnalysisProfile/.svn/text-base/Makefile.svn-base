include ../../../../environment.txt

INCLUDE_FLAG = -I../../../../include

OBJS = \
	Anap_AnalysisProfile.o \
	Anap_ColorScheme.o \
	Anap_Macro.o \
	Anap_RefExpProfile.o \
	Anap_ResidueProfile.o


all: objects library

library:
	ar -r ../../../../lib/libccp.a $(OBJS)

objects: $(OBJS)

.c.o:;	$(CC) -c $(CFLAGS) $(INCLUDE_FLAG) $(PYTHON_INCLUDE_FLAGS) $<

clean:
	rm *.o
