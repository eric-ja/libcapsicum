
AM_CPPFLAGS = -include $(top_builddir)/config.h -I$(top_builddir)/include
AM_CFLAGS = -std=gnu99

bin_PROGRAMS = \
	test-libcapsicum

test_libcapsicum_SOURCES = \
	ctest.c \
	main.c \
	fdlist.c \
	startfd.c

test_libcapsicum_LDFLAGS = \
	$(top_builddir)/src/libcapsicum.la
		