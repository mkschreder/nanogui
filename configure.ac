AC_PREREQ([2.61])

AC_INIT([nanogui], [1.0], [mkschreder.uk@gmail.com])
AC_CONFIG_AUX_DIR(aux-dist)
AM_INIT_AUTOMAKE

AC_PROG_MAKE_SET
AC_PROG_CC
AM_PROG_AS
AC_PROG_RANLIB
AC_LANG(C,CXX)
AC_PROG_CXX
PKG_PROG_PKG_CONFIG
PKG_INSTALLDIR

AX_CHECK_STDC
#AX_FUNCTION_SECTIONS
#AX_SUPERWARN

AC_CONFIG_MACRO_DIR([m4])
AC_CONFIG_MACRO_DIR([ultim84])

AC_CONFIG_TESTDIR([tests])

AC_CONFIG_HEADERS([include/config.h])

AC_PROG_CXX
AC_ARG_ENABLE(coverage, Enable coverage reporting, [AX_COVERAGE], [])
AC_CONFIG_FILES([tests/Makefile])

AM_MISSING_PROG([AUTOM4TE], [autom4te])

#AC_CHECK_FUNC([snprintf], [AC_DEFINE(HAVE_SNPRINTF, [1])])
#AC_CHECK_FUNC([strnlen], [AC_DEFINE(HAVE_STRNLEN, [1])])

AC_CONFIG_FILES([Makefile include/Makefile src/Makefile])
AC_CONFIG_FILES([tests/atlocal])
AC_CONFIG_FILES([nanogui.pc])

AC_OUTPUT

echo "
  $PACKAGE_NAME..     : v$PACKAGE_VERSION
  Prefix.........     : $prefix
  Debug Build....     : $debug
  C Compiler.....     : $CC $CFLAGS $CPPFLAGS
  Linker.........     : $LD $LDFLAGS $LIBS
  Coverage Reports    : $COVERAGE_SUPPORT
	gcov                : $GCOV
	COVERAGE_CFLAGS     : $COVERAGE_CFLAGS
	COVERAGE_CXXFLAGS   : $COVERAGE_CXXFLAGS
	COVERAGE_OPTFLAGS   : $COVERAGE_OPTFLAGS
	COVERAGE_LDFLAGS    : $COVERAGE_LDFLAGS
	COVERAGE_LIBS       : $COVERAGE_LIBS
	lcov                : $LCOV
"
