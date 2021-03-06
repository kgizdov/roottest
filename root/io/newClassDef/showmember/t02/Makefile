# Makefile for the ROOT test programs.
# This Makefile shows nicely how to compile and link applications
# using the ROOT libraries on all supported platforms.
#
# Copyright (c) 2000 Rene Brun and Fons Rademakers
#
# Author: Fons Rademakers, 29/2/2000

ARCH          = linux

CXX           =
ObjSuf        = o
SrcSuf        = cxx
ExeSuf        =
DllSuf        = so
OutPutOpt     = -o 

ROOTCFLAGS   := $(shell root-config --cflags)
ROOTLIBS     := $(shell root-config --libs)
ROOTGLIBS    := $(shell root-config --glibs)

ifeq ($(ARCH),win32)
PLATFORM      = win32
endif
ifeq ($(ARCH),win32gdk)
PLATFORM      = win32
endif

ifeq ($(ARCH),hpux)
# HP-UX with CC
CXX           = CC
CXXFLAGS      = -O +Z
LD            = CC
LDFLAGS       = -O +a1 -z
SOFLAGS       = -b
DllSuf        = sl
endif

ifeq ($(ARCH),hpuxacc)
# HP-UX 10.x with aCC
CXX           = aCC
CXXFLAGS      = -O +Z
LD            = aCC
LDFLAGS       = -O -z
SOFLAGS       = -b
endif

ifeq ($(ARCH),hpuxia64acc)
# HP-UX 11i 1.5 (IA-64) with aCC
CXX           = aCC
CXXFLAGS      = -O +Z
LD            = aCC
LDFLAGS       = -O -z
SOFLAGS       = -b
endif

ifeq ($(ARCH),hpuxegcs)
# HP-UX 10.x with g++
CXXFLAGS      = -O -fPIC
CXX           = g++
LD            = g++
LDFLAGS       = -O
SOFLAGS       = -fPIC -shared
endif


ifeq ($(ARCH),hurddeb)
# GNU/Hurd
CXX           = g++
CXXFLAGS      = -O -Wall -fPIC
LD            = g++
LDFLAGS       = -O
SOFLAGS       = -shared
endif

ifeq ($(ARCH),aix)
# IBM AIX xlC 4.x
CXX           = xlC
CXXFLAGS      = -O
LD            = xlC
LDFLAGS       = -O
SOFLAGS       =
ROOTLIBS     := $(shell root-config --nonew --libs)
ROOTGLIBS    := $(shell root-config --nonew --glibs)
endif

ifeq ($(ARCH),aix5)
# IBM AIX xlC 5.x
CXX           = xlC
CXXFLAGS      = -O
LD            = xlC
LDFLAGS       = -O
SOFLAGS       =
ROOTLIBS     := $(shell root-config --nonew --libs)
ROOTGLIBS    := $(shell root-config --nonew --glibs)
endif

ifeq ($(ARCH),aixegcs)
# IBM AIX with GCC
CXX           = g++
CXXFLAGS      = -O
LD            = g++
LDFLAGS       = -O
SOFLAGS       = -shared
endif

ifeq ($(ARCH),solaris)
# Solaris CC
CXX           = /opt/SUNWspro/bin/CC
CXXFLAGS      = -O -KPIC
LD            = /opt/SUNWspro/bin/CC
LDFLAGS       = -O
SOFLAGS       = -G
endif

ifeq ($(ARCH),solarisCC5)
# Solaris CC 5.0
CXX           = CC
CXXFLAGS      = -O -KPIC
LD            = CC
LDFLAGS       = -O
SOFLAGS       = -G
endif

ifeq ($(ARCH),solarisegcs)
# Solaris egcs
CXX           = g++
CXXFLAGS      = -O -fPIC
LD            = CC
LDFLAGS       = -O
SOFLAGS       = -shared
endif

ifeq ($(ARCH),solarisgcc)
# Solaris gcc
CXX           = g++
CXXFLAGS      = -O -fPIC
LD            = g++
LDFLAGS       = -O
SOFLAGS       = -shared
endif

ifeq ($(ARCH),solariskcc)
# Solaris kcc
CXX           = KCC
CXXFLAGS      = -O4 -KPIC
LD            = KCC
LDFLAGS       = -O4
SOFLAGS       =
endif

ifeq ($(ARCH),solarisx86)
# Solaris CC on Intel
CXX           = CC
CXXFLAGS      = -O -KPIC
LD            = CC
LDFLAGS       = -O
SOFLAGS       = -G
endif

ifeq ($(ARCH),sgicc)
# SGI
CXX           = CC -n32  -I/usr/include/CC.sgi
CXXFLAGS      = -O
LD            = CC -n32  -I/usr/include/CC.sgi
LDFLAGS       = -O
SOFLAGS       = -shared
endif

ifeq ($(ARCH),sgiegcs)
# SGI 6.x with EGCS
CXX           = g++
CXXFLAGS      = -O -Wall -fPIC
LD            = g++
LDFLAGS       = -O -Wl,-u,__builtin_new -Wl,-u,__builtin_delete -Wl,-u,__nw__FUiPv
SOFLAGS       = -shared
endif

ifeq ($(ARCH),sgin32egcs)
# SGI 6.x with EGCS for n32 ABI
CXX           = g++
CXXFLAGS      = -O -Wall -fPIC
LD            = g++
LDFLAGS       = -O -L/usr/lib32 -Wl,-woff,134
SOFLAGS       = -shared
endif

ifeq ($(ARCH),sgigcc)
# SGI with GCC
CXX           = g++
CXXFLAGS      = -O -Wall -fPIC
LD            = g++
LDFLAGS       = -O -Wl,-u,__builtin_new -Wl,-u,__builtin_delete -Wl,-u,__nw__FUiPv
SOFLAGS       = -shared
endif

ifeq ($(ARCH),sgikcc)
# SGI with KCC
CXX           = KCC -n32 --no_exceptions --one_instantiation_per_object
CXXFLAGS      = -O
LD            = KCC -n32 --no_exceptions
LDFLAGS       = -O
SOFLAGS       =
endif

ifeq ($(ARCH),alphagcc)
# Alpha/OSF with g++
CXX           = g++
CXXFLAGS      = -O -Wall -fPIC
LD            = g++
LDFLAGS       = -O
SOFLAGS       = -Wl,-expect_unresolved,* -shared
endif

ifeq ($(ARCH),alphaegcs)
# Alpha/OSF with egcs
CXX           = g++
CXXFLAGS      = -O -Wall -fPIC
LD            = g++
LDFLAGS       = -O
SOFLAGS       = -Wl,-expect_unresolved,* -shared
endif

ifeq ($(ARCH),alphakcc)
# Alpha/OSF with kai compiler (not yet valid)
CXX           = g++
CXXFLAGS      = -O -fPIC
LD            = g++
LDFLAGS       = -O
SOFLAGS       = -Wl,-expect_unresolved,* -shared
endif

ifeq ($(ARCH),alphacxx6)
# Alpha/OSF with cxx6
CXX           = cxx
CXXFLAGS      = -O0
LD            = cxx
LDFLAGS       = -O
SOFLAGS       = -Wl,-expect_unresolved,* -shared
endif

ifeq ($(ARCH),alphacxx)
# Alpha/OSF with cxx5
CXX           = cxx
CXXFLAGS      = -O
LD            = cxx
LDFLAGS       = -O
SOFLAGS       = -Wl,-expect_unresolved,* -call_shared
endif

ifeq ($(ARCH),linuxrh51)
# Linux with gcc 2.7.2.x
CXX           = g++
CXXFLAGS      = -g -Wall -fPIC
LD            = g++
LDFLAGS       = -O
SOFLAGS       = -shared
endif

ifeq ($(ARCH),linuxrh42)
# Linux with gcc 2.7.2.x (RedHat 4.2)
CXX           = g++
CXXFLAGS      = -O -Wall -fPIC
LD            = g++
LDFLAGS       = -O
SOFLAGS       = -shared
endif

ifeq ($(ARCH),linuxdeb)
# Linux with gcc 2.7.2.x
CXX           = g++
CXXFLAGS      = -O -Wall -fPIC
LD            = g++
LDFLAGS       = -O
SOFLAGS       = -shared
endif

ifeq ($(ARCH),linuxdeb2)
# Linux with gcc 2.7.2.x
CXX           = g++
CXXFLAGS      = -O -Wall -fPIC
LD            = g++
LDFLAGS       = -O
SOFLAGS       = -shared
endif

ifeq ($(ARCH),linuxsuse6)
# Linux with gcc 2.7.2.x
CXX           = g++
CXXFLAGS      = -O -Wall -fPIC
LD            = g++
LDFLAGS       = -O
SOFLAGS       = -shared
endif

ifeq ($(ARCH),linux)
# Linux with egcs, gcc 2.9x, gcc 3.x (>= RedHat 5.2)
CXX           = g++
CXXFLAGS      = -g -Wall -fPIC
LD            = g++
LDFLAGS       = -g
SOFLAGS       = -shared
endif

ifeq ($(ARCH),linuxkcc)
# Linux with the KAI compiler
CXX           = KCC
CXXFLAGS      = -fPIC +K0
LD            = KCC
LDFLAGS       = -O
SOFLAGS       =
endif

ifeq ($(ARCH),linuxicc)
# Linux with Intel icc compiler
CXX           = icc
CXXFLAGS      = -O -KPIC
LD            = icc
LDFLAGS       = -O
SOFLAGS       = -shared
endif

ifeq ($(ARCH),linuxppcegcs)
# MkLinux with egcs/glibc
CXX           = g++
CXXFLAGS      = -O -Wall -fPIC
LD            = g++
LDFLAGS       = -O
SOFLAGS       = -shared
endif

ifeq ($(ARCH),linuxia64gcc)
# Itanium Linux with gcc 2.9x
CXX           = g++
CXXFLAGS      = -O -Wall -fPIC
LD            = g++
LDFLAGS       = -O
SOFLAGS       = -shared
endif

ifeq ($(ARCH),linuxia64sgi)
# Itanium Linux with sgiCC
CXX           = sgiCC
CXXFLAGS      = -O -Wall -fPIC
LD            = gsgiCC
LDFLAGS       = -O
SOFLAGS       = -shared
endif

ifeq ($(ARCH),linuxia64ecc)
# Itanium Linux with Intel ecc
CXX           = ecc
CXXFLAGS      = -O -KPIC
LD            = ecc
LDFLAGS       = -O -i_dynamic
SOFLAGS       = -shared
endif

ifeq ($(ARCH),linuxalphaegcs)
# Alpha Linux with egcs
CXX           = g++
CXXFLAGS      = -O -Wall -fPIC
LD            = g++
LDFLAGS       = -O
SOFLAGS       = -shared
endif

ifeq ($(ARCH),linuxarm)
# ARM Linux with egcs
CXX           = g++
CXXFLAGS      = -O -Wall -fPIC
LD            = g++
LDFLAGS       = -O
SOFLAGS       = -shared
endif

ifeq ($(ARCH),mklinux)
# MkLinux with libc5
CXX           = g++
CXXFLAGS      = -O -Wall -fPIC
LD            = g++
LDFLAGS       = -O
SOFLAGS       = -shared
endif

ifeq ($(ARCH),freebsd)
# FreeBSD with libc5
CXX           = g++
CXXFLAGS      = -O -pipe -W -Wall -fPIC
LD            = g++
LDFLAGS       = -O
SOFLAGS       = -shared -Wl,-x
endif

ifeq ($(ARCH),freebsd4)
# FreeBSD with glibc
CXX           = g++
CXXFLAGS      = -O -pipe -W -Wall -fPIC
LD            = g++
LDFLAGS       = -O
SOFLAGS       = -shared -Wl,-x
endif

ifeq ($(ARCH),macosx)
# MacOS X with cc (GNU cc 2.95.2)
CXX           = c++
CXXFLAGS      = -O -pipe -Wall
LD            = c++
LDFLAGS       = -O -Xlinker -bind_at_load -flat_namespace
# The SOFLAGS will be used to create the .dylib; the .so will
# be created separately
DllSuf        = dylib
SOFLAGS       = -dynamiclib -flat_namespace -undefined suppress -nostdlib ../lib/macosx-fpsave.o
endif

ifeq ($(ARCH),hiux)
# Hitachi HIUX
CXX           = g++
CXXFLAGS      = -O2 -fPIC
LD            = g++
LDFLAGS       = -Wl,+s
SOFLAGS       = -Wl,-b,-E -nostdlib -nostartfiles
DllSuf        = sl
endif

ifeq ($(PLATFORM),win32)
# Windows with the VC++ compiler
ObjSuf        = obj
SrcSuf        = cxx
ExeSuf        = .exe
DllSuf        = dll
OutPutOpt     = -out:
CXX           = cl
CXXOPT        = -O2
#CXXOPT        = -Z7
CXXFLAGS      = $(CXXOPT) -G5 -GR -MD -DWIN32 -D_WINDOWS -nologo \
                -DVISUAL_CPLUSPLUS -D_X86_=1 -D_DLL
LD            = link
LDOPT         = -opt:ref
#LDOPT         = -debug
LDFLAGS       = $(LDOPT) -pdb:none -nologo -nodefaultlib -incremental:no
SOFLAGS       = -DLL
SYSLIBS       = msvcrt.lib oldnames.lib kernel32.lib  ws2_32.lib mswsock.lib \
                advapi32.lib  user32.lib gdi32.lib comdlg32.lib winspool.lib \
                msvcirt.lib

ROOTLIBS     := $(shell root-config --nonew --libs)
ROOTGLIBS    := $(shell root-config --nonew --glibs)
endif

ifeq ($(CXX),)
$(error $(ARCH) invalid architecture)
endif

CXXFLAGS     += $(ROOTCFLAGS)
LIBS          = $(ROOTLIBS) $(SYSLIBS)
GLIBS         = $(ROOTGLIBS) $(SYSLIBS)

#------------------------------------------------------------------------------

EVENTO        = Event.$(ObjSuf) EventDict.$(ObjSuf)
EVENTS        = Event.$(SrcSuf) EventDict.$(SrcSuf)
EVENTSO       = libEvent.$(DllSuf)
EVENT         = Event$(ExeSuf)
ifeq ($(PLATFORM),win32)
EVENTLIB      = libEvent.lib
else
EVENTLIB      = $(EVENTSO)
endif

MAINEVENTO    = MainEvent.$(ObjSuf)
MAINEVENTS    = MainEvent.$(SrcSuf)

HWORLDO       = hworld.$(ObjSuf)
HWORLDS       = hworld.$(SrcSuf)
HWORLD        = hworld$(ExeSuf)

HSIMPLEO      = hsimple.$(ObjSuf)
HSIMPLES      = hsimple.$(SrcSuf)
HSIMPLE       = hsimple$(ExeSuf)

MINEXAMO      = minexam.$(ObjSuf)
MINEXAMS      = minexam.$(SrcSuf)
MINEXAM       = minexam$(ExeSuf)

TSTRINGO      = tstring.$(ObjSuf)
TSTRINGS      = tstring.$(SrcSuf)
TSTRING       = tstring$(ExeSuf)

TCOLLEXO      = tcollex.$(ObjSuf)
TCOLLEXS      = tcollex.$(SrcSuf)
TCOLLEX       = tcollex$(ExeSuf)

TCOLLBMO      = tcollbm.$(ObjSuf)
TCOLLBMS      = tcollbm.$(SrcSuf)
TCOLLBM       = tcollbm$(ExeSuf)

VVECTORO      = vvector.$(ObjSuf)
VVECTORS      = vvector.$(SrcSuf)
VVECTOR       = vvector$(ExeSuf)

VMATRIXO      = vmatrix.$(ObjSuf)
VMATRIXS      = vmatrix.$(SrcSuf)
VMATRIX       = vmatrix$(ExeSuf)

VLAZYO        = vlazy.$(ObjSuf)
VLAZYS        = vlazy.$(SrcSuf)
VLAZY         = vlazy$(ExeSuf)

GUITESTO      = guitest.$(ObjSuf)
GUITESTS      = guitest.$(SrcSuf)
GUITEST       = guitest$(ExeSuf)

GUIVIEWERO    = guiviewer.$(ObjSuf) guiviewerDict.$(ObjSuf)
GUIVIEWERS    = guiviewer.$(SrcSuf) guiviewerDict.$(SrcSuf)
GUIVIEWER     = guiviewer$(ExeSuf)

HELLOO        = Hello.$(ObjSuf) HelloDict.$(ObjSuf)
HELLOS        = Hello.$(SrcSuf) HelloDict.$(SrcSuf)
HELLOSO       = Hello.$(DllSuf)

ACLOCKO       = Aclock.$(ObjSuf) AclockDict.$(ObjSuf)
ACLOCKS       = Aclock.$(SrcSuf) AclockDict.$(SrcSuf)
ACLOCKSO      = Aclock.$(DllSuf)

TETRISO       = Tetris.$(ObjSuf) TetrisDict.$(ObjSuf)
TETRISS       = Tetris.$(SrcSuf) TetrisDict.$(SrcSuf)
TETRISSO      = Tetris.$(DllSuf)

STRESSO       = stress.$(ObjSuf)
STRESSS       = stress.$(SrcSuf)
STRESS        = stress$(ExeSuf)

TBENCHO       = TBench.$(ObjSuf) TBenchDict.$(ObjSuf)
TBENCHS       = TBench.$(SrcSuf) TBenchDict.$(SrcSuf)
TBENCHSO      = TBench.$(DllSuf)

BENCHO        = bench.$(ObjSuf)
BENCHS        = bench.$(SrcSuf)
BENCH         = bench$(ExeSuf)

OBJS          = $(EVENTO) $(MAINEVENTO) $(HWORLDO) $(HSIMPLEO) $(MINEXAMO) \
                $(TSTRINGO) $(TCOLLEXO) $(VVECTORO) $(VMATRIXO) $(VLAZYO) \
                $(HELLOO) $(ACLOCKO) $(STRESSO) $(TBENCHO) $(BENCHO) \
                $(TCOLLBMO)

PROGRAMS      = $(EVENT) $(HWORLD) $(HSIMPLE) $(MINEXAM) $(TSTRING) \
                $(TCOLLEX) $(TCOLLBM) $(VVECTOR) $(VMATRIX) $(VLAZY) \
                $(HELLOSO) $(ACLOCKSO) $(STRESS) $(TBENCHSO) $(BENCH)
ifneq ($(ARCH),win32)
OBJS         += $(GUITESTO) $(GUIVIEWERO) $(TETRISO)
PROGRAMS     += $(GUITEST) $(GUIVIEWER) $(TETRISSO)
endif

#------------------------------------------------------------------------------

.SUFFIXES: .$(SrcSuf) .$(ObjSuf) .$(DllSuf)
.PHONY:    Aclock Hello Tetris

all:            $(PROGRAMS)

$(EVENTSO):     $(EVENTO)
ifeq ($(ARCH),aix)
		/usr/ibmcxx/bin/makeC++SharedLib $(OutPutOpt) $@ $(LIBS) -p 0 $^
else
ifeq ($(ARCH),aix5)
		/usr/vacpp/bin/makeC++SharedLib $(OutPutOpt) $@ $(LIBS) -p 0 $^
else
ifeq ($(ARCH),alphacxx)
# due to a bug in cxx/ld under osf3.xx, one cannot use cxx to generate
# a shared library. One must use ld instead.
		ld -L/usr/lib/cmplrs/cxx -rpath /usr/lib/cmplrs/cxx \
		   -expect_unresolved "*" -g0 -O1 -shared \
		   /usr/lib/cmplrs/cc/crt0.o /usr/lib/cmplrs/cxx/_main.o \
		   -o $@ $^ -lcxxstd -lcxx -lexc -lots -lc
else
ifeq ($(ARCH),macosx)
# We need to make both the .dylib and the .so
		$(LD) $(SOFLAGS) $(EVENTO) $(OutPutOpt) $(EVENTSO)
		$(LD) -bundle -undefined suppress -Wl,-x $(LDFLAGS) $^ \
		   $(OutPutOpt) $@
else
ifeq ($(PLATFORM),win32)
		bindexplib $* $^ > $*.def
		lib -nologo -MACHINE:IX86 $^ -def:$*.def \
		   $(OutPutOpt)$(EVENTLIB)
		$(LD) $(SOFLAGS) $(LDFLAGS) $^ $*.exp $(LIBS) \
		   $(OutPutOpt)$@
else
		$(LD) $(SOFLAGS) $(LDFLAGS) $^ $(OutPutOpt) $@
endif
endif
endif
endif
endif
		@echo "$@ done"

$(EVENT):       $(EVENTSO) $(MAINEVENTO)
		$(LD) $(LDFLAGS) $(MAINEVENTO) $(EVENTLIB) $(LIBS) \
		   $(OutPutOpt)$(EVENT)
		@echo "$@ done"

$(HWORLD):      $(HWORLDO)
		$(LD) $(LDFLAGS) $^ $(LIBS) $(OutPutOpt)$@
		@echo "$@ done"

$(HSIMPLE):     $(HSIMPLEO)
		$(LD) $(LDFLAGS) $^ $(LIBS) $(OutPutOpt)$@
		@echo "$@ done"

$(MINEXAM):     $(MINEXAMO)
		$(LD) $(LDFLAGS) $^ $(LIBS) $(OutPutOpt)$@
		@echo "$@ done"

$(TSTRING):     $(TSTRINGO)
		$(LD) $(LDFLAGS) $^ $(LIBS) $(OutPutOpt)$@
		@echo "$@ done"

$(TCOLLEX):     $(TCOLLEXO)
		$(LD) $(LDFLAGS) $^ $(LIBS) $(OutPutOpt)$@
		@echo "$@ done"

$(TCOLLBM):     $(TCOLLBMO)
		$(LD) $(LDFLAGS) $^ $(LIBS) $(OutPutOpt)$@
		@echo "$@ done"

$(VVECTOR):     $(VVECTORO)
		$(LD) $(LDFLAGS) $^ $(LIBS) $(OutPutOpt)$@
		@echo "$@ done"

$(VMATRIX):     $(VMATRIXO)
		$(LD) $(LDFLAGS) $^ $(LIBS) $(OutPutOpt)$@
		@echo "$@ done"

$(VLAZY):       $(VLAZYO)
		$(LD) $(LDFLAGS) $^ $(LIBS) $(OutPutOpt)$@
		@echo "$@ done"

$(GUITEST):     $(GUITESTO)
		$(LD) $(LDFLAGS) $^ $(GLIBS) $(OutPutOpt)$@
		@echo "$@ done"

$(GUIVIEWER):   $(GUIVIEWERO)
		$(LD) $(LDFLAGS) $^ $(GLIBS) $(OutPutOpt)$@
		@echo "$@ done"

$(STRESS):      $(STRESSO) $(EVENT)
		$(LD) $(LDFLAGS) $(STRESSO) $(EVENTLIB) $(LIBS) $(OutPutOpt)$@
		@echo "$@ done"

$(BENCH):       $(BENCHO) $(TBENCHSO)
ifeq ($(ARCH),macosx)
		$(LD) -flat_namespace $(BENCHO) $(TBENCHO) $(LIBS) $(OutPutOpt)$@
else
		$(LD) $(LDFLAGS) $(BENCHO) $(TBENCHO) $(LIBS) $(OutPutOpt)$@
endif
		@echo "$@ done"

Hello:          $(HELLOSO)
$(HELLOSO):     $(HELLOO)
ifeq ($(ARCH),aix)
		/usr/ibmcxx/bin/makeC++SharedLib $(OutPutOpt) $@ $(LIBS) -p 0 $^
else
ifeq ($(ARCH),aix5)
		/usr/vacpp/bin/makeC++SharedLib $(OutPutOpt) $@ $(LIBS) -p 0 $^
else
ifeq ($(ARCH),alphacxx)
# due to a bug in cxx/ld under osf3.xx, one cannot use cxx to generate
# a shared library. One must use ld instead.
		ld -L/usr/lib/cmplrs/cxx -rpath /usr/lib/cmplrs/cxx \
		   -expect_unresolved "*" -g0 -O1 -shared \
		   /usr/lib/cmplrs/cc/crt0.o /usr/lib/cmplrs/cxx/_main.o \
		   -o $@ $^ -lcxxstd -lcxx -lexc -lots -lc
else
ifeq ($(ARCH),macosx)
# We need to make both the .dylib and the .so
		$(LD) $(SOFLAGS) $^ $(OutPutOpt) $@
		$(LD) -bundle -undefined suppress -Wl,-x $(LDFLAGS) $^ \
		   $(OutPutOpt) $@
else
ifeq ($(PLATFORM),win32)
		$(LD) $(SOFLAGS) $(LDFLAGS) $^ $(LIBS) $(OutPutOpt)$@
else
		$(LD) $(SOFLAGS) $(LDFLAGS) $^ $(OutPutOpt) $@
endif
endif
endif
endif
endif

Aclock:         $(ACLOCKSO)
$(ACLOCKSO):    $(ACLOCKO)
ifeq ($(ARCH),aix)
		/usr/ibmcxx/bin/makeC++SharedLib $(OutPutOpt) $@ $(LIBS) -p 0 $^
else
ifeq ($(ARCH),aix5)
		/usr/vacpp/bin/makeC++SharedLib $(OutPutOpt) $@ $(LIBS) -p 0 $^
else
ifeq ($(ARCH),alphacxx)
# due to a bug in cxx/ld under osf3.xx, one cannot use cxx to generate
# a shared library. One must use ld instead.
		ld -L/usr/lib/cmplrs/cxx -rpath /usr/lib/cmplrs/cxx \
		   -expect_unresolved "*" -g0 -O1 -shared \
		   /usr/lib/cmplrs/cc/crt0.o /usr/lib/cmplrs/cxx/_main.o \
		   -o $@ $^ -lcxxstd -lcxx -lexc -lots -lc
else
ifeq ($(ARCH),macosx)
# We need to make both the .dylib and the .so
		$(LD) $(SOFLAGS) $^ $(OutPutOpt) $@
		$(LD) -bundle -undefined suppress -Wl,-x $(LDFLAGS) $^ \
		   $(OutPutOpt) $@
else
ifeq ($(PLATFORM),win32)
		$(LD) $(SOFLAGS) $(LDFLAGS) $^ $(LIBS) $(OutPutOpt)$@
else
		$(LD) $(SOFLAGS) $(LDFLAGS) $^ $(OutPutOpt) $@
endif
endif
endif
endif
endif

Tetris:         $(TETRISSO)
$(TETRISSO):    $(TETRISO)
ifeq ($(ARCH),aix)
		/usr/ibmcxx/bin/makeC++SharedLib $(OutPutOpt) $@ $(GLIBS) -p 0 $^
else
ifeq ($(ARCH),aix5)
		/usr/vacpp/bin/makeC++SharedLib $(OutPutOpt) $@ $(GLIBS) -p 0 $^
else
ifeq ($(ARCH),alphacxx)
# due to a bug in cxx/ld under osf3.xx, one cannot use cxx to generate
# a shared library. One must use ld instead.
		ld -L/usr/lib/cmplrs/cxx -rpath /usr/lib/cmplrs/cxx \
		   -expect_unresolved "*" -g0 -O1 -shared \
		   /usr/lib/cmplrs/cc/crt0.o /usr/lib/cmplrs/cxx/_main.o \
		   -o $@ $^ -lcxxstd -lcxx -lexc -lots -lc
else
ifeq ($(ARCH),macosx)
# We need to make both the .dylib and the .so
		$(LD) $(SOFLAGS) $^ $(OutPutOpt) $@
		$(LD) -bundle -undefined suppress -Wl,-x $(LDFLAGS) $^ \
	 	   $(OutPutOpt) $@
else
ifeq ($(PLATFORM),win32)
		$(LD) $(SOFLAGS) $(LDFLAGS) $^ $(GLIBS) $(OutPutOpt)$@
else
		$(LD) $(SOFLAGS) $(LDFLAGS) $^ $(OutPutOpt) $@
endif
endif
endif
endif
endif

$(TBENCHSO):    $(TBENCHO)
ifeq ($(ARCH),aix)
		/usr/ibmcxx/bin/makeC++SharedLib $(OutPutOpt) $@ $(LIBS) -p 0 $^
else
ifeq ($(ARCH),aix5)
		/usr/vacpp/bin/makeC++SharedLib $(OutPutOpt) $@ $(LIBS) -p 0 $^
else
ifeq ($(ARCH),alphacxx)
# due to a bug in cxx/ld under osf3.xx, one cannot use cxx to generate
# a shared library. One must use ld instead.
		ld -L/usr/lib/cmplrs/cxx -rpath /usr/lib/cmplrs/cxx \
		   -expect_unresolved "*" -g0 -O1 -shared \
		   /usr/lib/cmplrs/cc/crt0.o /usr/lib/cmplrs/cxx/_main.o \
		   -o $@ $^ -lcxxstd -lcxx -lexc -lots -lc
else
ifeq ($(ARCH),macosx)
# We need to make both the .dylib and the .so
		$(LD) $(SOFLAGS) $^ -lstdc++ $(OutPutOpt) $@
		$(LD) -bundle -undefined suppress -Wl,-x $(LDFLAGS) $^ \
		   $(OutPutOpt) $@
else
ifeq ($(PLATFORM),win32)
		$(LD) $(SOFLAGS) $(LDFLAGS) $^ $(LIBS) $(OutPutOpt)$@
else
		$(LD) $(SOFLAGS) $(LDFLAGS) $^ $(OutPutOpt) $@
endif
endif
endif
endif
endif

clean:
		@rm -f $(OBJS) core

distclean:      clean
		@rm -f $(PROGRAMS) $(EVENTSO) $(EVENTLIB) *Dict.* *.def *.exp \
		   *.root *.ps *.so .def so_locations
		@rm -rf cxx_repository

.SUFFIXES: .$(SrcSuf)

###

Event.$(ObjSuf): Event.h
MainEvent.$(ObjSuf): Event.h

EventLinkDef.h: $(shell which rootcint) $(ROOT_LOC)/include/Rtypes.h
	touch EventLinkDef.h

EventDict.$(SrcSuf): Event.h EventLinkDef.h
	@echo "Generating dictionary $@..."
	@rootcint -f $@ $^

Hello.$(ObjSuf): Hello.h
HelloDict.$(SrcSuf): Hello.h
	@echo "Generating dictionary $@..."
	@rootcint -f $@ $^

Aclock.$(ObjSuf): Aclock.h
AclockDict.$(SrcSuf): Aclock.h
	@echo "Generating dictionary $@..."
	@rootcint -f $@ $^

Tetris.$(ObjSuf): Tetris.h
TetrisDict.$(SrcSuf): Tetris.h
	@echo "Generating dictionary $@..."
	@rootcint -f $@ $^

TBench.$(ObjSuf): TBench.h
TBenchDict.$(SrcSuf): TBench.h benchLinkDef.h
	@echo "Generating dictionary $@..."
	@rootcint -f $@ $^

guiviewer.$(ObjSuf): guiviewer.h
guiviewerDict.$(SrcSuf): guiviewer.h guiviewerLinkDef.h
	@echo "Generating dictionary $@..."
	@rootcint -f $@ $^

.$(SrcSuf).$(ObjSuf):
	$(CXX) $(CXXFLAGS) -c $<
