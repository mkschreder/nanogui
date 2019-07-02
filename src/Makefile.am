lib_LIBRARIES = libnanogui.a
libnanogui_a_SOURCES=\
	button.cpp\
	checkbox.cpp\
	colorpicker.cpp\
	colorwheel.cpp\
	combobox.cpp\
	common.cpp\
	glcanvas.cpp\
	glutil.cpp\
	graph.cpp\
	imagepanel.cpp\
	imageview.cpp\
	label.cpp\
	layout.cpp\
	messagedialog.cpp\
	popupbutton.cpp\
	popup.cpp\
	progressbar.cpp\
	screen.cpp\
	serializer.cpp\
	slider.cpp\
	stackedwidget.cpp\
	tabheader.cpp\
	tabwidget.cpp\
	textbox.cpp\
	theme.cpp\
	vscrollpanel.cpp\
	widget.cpp\
	nanogui_resources.cpp\
	window.cpp

libnanogui_a_CXXFLAGS=\
	$(COVERAGE_CFLAGS)\
	-std=c++14\
	-Os\
	-fstack-usage\
	-Wno-deprecated-declarations\
	-ffunction-sections -fdata-sections\
	-I$(srcdir)/../include/\
	-I$(abs_top_builddir)/include/

libnanogui_a_LIBADD=\
	$(COVERAGE_LDADD)

AUTOMAKE_OPTIONS = subdir-objects
