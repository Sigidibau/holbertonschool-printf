#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "main.h"

/**
 *
 *
 *
 *
 *
 */


int run_printf(const char *formatm, va_list);
int _printf(const char *format, ...)
{
	 va_list args;
	 int ret;

	 if (format == NULL)
		 return (-1);
	 va_start(args, format);

	 ret = run_printf(format, args);
	 
	 return (ret);
}

