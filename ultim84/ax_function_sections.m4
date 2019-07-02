AC_DEFUN([AX_FUNCTION_SECTIONS],
	[AX_APPEND_FLAG([\
		-ffunction-sections -fdata-sections\
	], [CFLAGS])
	AX_APPEND_FLAG([\
		-Wl,--gc-sections\
	], LDFLAGS)
])
