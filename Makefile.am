SUBDIRS = include src tests
AUTOMAKE_OPTIONS = subdir-objects

pkgconfig_DATA=nanovg.pc

all-hook:
	lcov --directory . --zerocounters

include Makefile.coverage.am
