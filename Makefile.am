SUBDIRS = include src tests
AUTOMAKE_OPTIONS = subdir-objects

pkgconfig_DATA=nanogui.pc

all-hook:
	lcov --directory . --zerocounters

include Makefile.coverage.am
