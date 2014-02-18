
AM_CPPFLAGS = -include $(top_builddir)/config.h -I$(top_builddir)/include
AM_CFLAGS = -std=gnu99

lib_LTLIBRARIES = libcapsicum.la

libcapsicum_la_SOURCES = \
	libcapsicum.c			\
	libcapsicum_sandbox.c		\
	libcapsicum_sandbox_io.c	\
	libcapsicum_host.c		\
	libcapsicum_host_io.c		\
	libcapsicum_fdlist.c

libcapsicum_la_LDFLAGS = -version-info 1:0:0
