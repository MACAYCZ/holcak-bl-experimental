#pragma once
#include <stdarg.h>

static inline void printf(const char *fmt, ...);
static inline void vprintf(const char *fmt, va_list args);

static inline void printf(const char *fmt, ...)
{
	va_list args;
	va_start(args, fmt);
	vprintf(fmt, args);
	va_end(args);
}

static inline void vprintf(const char *fmt, va_list args)
{
	(void)args;
	*((char*)0xB8000) = fmt[0];
}
