#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.69])
AC_INIT(libcapsicum, 1.0, [BUG-REPORT-ADDRESS])

AC_CONFIG_SRCDIR([src/libcapsicum.c])
AC_CONFIG_HEADERS([config.h])

AM_INIT_AUTOMAKE
LT_INIT

# Checks for programs.
AC_PROG_CC
AC_PROG_MAKE_SET

# Checks for libraries.

# Checks for header files.
AC_CHECK_HEADERS([fcntl.h limits.h paths.h stdlib.h string.h sys/param.h sys/socket.h unistd.h linux/procdesc.h sys/procdesc.h sys/sbuf.h])

# Checks for typedefs, structures, and compiler characteristics.
AC_CHECK_HEADER_STDBOOL
AC_C_INLINE
AC_TYPE_PID_T
AC_TYPE_SIZE_T
AC_TYPE_SSIZE_T

AC_CHECK_TYPES(struct {} __packed, [], AC_DEFINE([NEED___PACKED], [1], [Define if we need a definition for __packed]), [#include <sys/cdefs.h>])
AC_CHECK_TYPES(struct {} __unused, [], AC_DEFINE([NEED___UNUSED], [1], [Define if we need a definition for __unused]), [#include <sys/cdefs.h>])

AC_MSG_CHECKING(if SO_NOSIGPIPE is available)
AC_TRY_LINK([#include <sys/socket.h>], [return SO_NOSIGPIPE;],
    [AC_DEFINE([HAVE_SO_NOSIGPIPE], [1], [Define if SO_NOSIGPIPE is available.]) AC_MSG_RESULT(yes)], AC_MSG_RESULT(no))

AC_MSG_CHECKING(if EBADRPC is available)
AC_TRY_LINK([#include <errno.h>], [return EBADRPC;],
    [AC_DEFINE([HAVE_EBADRPC], [1], [Define if EBADRPC is available.]) AC_MSG_RESULT(yes)], AC_MSG_RESULT(no))

AC_MSG_CHECKING(if MAP_NOSYNC is available)
AC_TRY_LINK([#include <sys/socket.h>], [return MAP_NOSYNC;],
    [AC_DEFINE([HAVE_MAP_NOSYNC], [1], [Define if MAP_NOSYNC is available.]) AC_MSG_RESULT(yes)], AC_MSG_RESULT(no))


# Capsicum declarations.
AC_CHECK_TYPES(cap_rights_t, [], [AC_DEFINE([NEED_CAPSICUM_H], [1], [Define if capsicum.h needs to be included.])])

# Checks for library functions.
AC_FUNC_FORK
AC_FUNC_MALLOC
AC_FUNC_MMAP
AC_FUNC_REALLOC
AC_CHECK_FUNCS([bzero dup2 ftruncate munmap setenv basename_r closefrom ld_insandbox])

AC_CONFIG_FILES([Makefile
		src/Makefile
		test/Makefile])

AC_OUTPUT
