bin_PROGRAMS = test1 
HDRS = 
SRCS =
INCS = -I$(srcdir)/../common
INCS += -I$(srcdir)/../al
INCS += -I$(srcdir)/../il
LCFLAGS = -W -Wall -Wall $(INCS) 
LLDADD = $(builddir)/../il/libilif.a
LLDADD += $(builddir)/../pl/libplif.a
LLDADD += $(builddir)/../common/libcommon.a
LLDFLAGS = -lpthread
HDRS = al_test.h
SRCS = al_test.c
SRCS += main.c

test1_CFLAGS  = $(LCFLAGS)
test1_LDADD   = $(LLDADD)
test1_LDFLAGS = $(LLDFLAGS)
test1_SOURCES = $(SRCS) $(HDRS)

