INCLUDE_PATH =  -I"$(ISE_LIBRARY)/library/cURL/spec/include"
SHELL = /bin/sh
CC = cc
CPP = c++
CFLAGS = -O0 -pipe -fno-common -fPIC  -DEIF_IEEE_BEHAVIOR -DWORKBENCH -I"/Applications/MacPorts/Eiffel_15.08/studio/spec/macosx-x86-64/include" -I. $(INCLUDE_PATH)
CPPFLAGS = -O0 -pipe -fno-common -fPIC  -DWORKBENCH -I"/Applications/MacPorts/Eiffel_15.08/studio/spec/macosx-x86-64/include" -I. $(INCLUDE_PATH)
LDFLAGS = 
CCLDFLAGS =   
LDSHAREDFLAGS =   -dynamiclib -flat_namespace -undefined suppress -o
EIFLIB = "/Applications/MacPorts/Eiffel_15.08/studio/spec/macosx-x86-64/lib/libwkbench.a"
EIFTEMPLATES = /Applications/MacPorts/Eiffel_15.08/studio/config/macosx-x86-64/templates
LIBS = -lm
MAKE = make
AR = ar
LD = ld
MKDEP = \$(EIFFEL_SRC)/C/mkdep $(DPFLAGS) --
MV = /bin/mv
CP = /bin/cp
RANLIB = :
RM = /bin/rm -f
FILE_EXIST = 
RMDIR = 
X2C = "/Applications/MacPorts/Eiffel_15.08/studio/spec/macosx-x86-64/bin/x2c"
SHAREDLINK = cc
SHAREDLIBS = -lm
SHARED_SUFFIX = .dylib
COMMAND_MAKEFILE = 
START_TEST = if [ ! -f finished ] ; then 
END_TEST = ; fi 
CREATE_TEST = touch finished 
SYSTEM_IN_DYNAMIC_LIB = test_redwood.dylib 

.SUFFIXES:.cpp .o

.c.o:
	$(CC) $(CFLAGS) -c $<

.cpp.o:
	$(CPP) $(CPPFLAGS) -c $<

OBJECTS = big_file_C1_c.o 

OLDOBJECTS =  re873.o re873d.o re891.o re891d.o ht872.o ht872d.o ht890.o ht890d.o \
	ht871.o ht871d.o ur892.o ur892d.o ht889.o ht889d.o ht888.o ht888d.o \
	ht887.o ht887d.o ht886.o ht886d.o js885.o js885d.o li880.o li880d.o \
	js870.o js870d.o js884.o js884d.o js883.o js883d.o pe882.o pe882d.o \
	ht881.o ht881d.o ht879.o ht879d.o cu869.o cu869d.o cu868.o cu868d.o \
	cu867.o cu867d.o cu866.o cu866d.o cu865.o cu865d.o cu864.o cu864d.o \
	cu863.o cu863d.o cu862.o cu862d.o cu861.o cu861d.o ad878.o ad878d.o \
	so877.o so877d.o sh876.o sh876d.o dy875.o dy875d.o dy874.o dy874d.o 

all: Cobj1.o

Cobj1.o: $(OBJECTS) Makefile
	$(LD) $(LDFLAGS) -r -o Cobj1.o $(OBJECTS)
	$(RM) $(OBJECTS)
	$(CREATE_TEST)

clean: local_clean
clobber: local_clobber

local_clean::
	$(RM) core finished *.o

local_clobber:: local_clean
	$(RM) Makefile

