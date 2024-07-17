#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "main.h"
int _printf(const char *format, ...)
{
	int len = 0;
	va_list arg_list;
	va_start(arg_list, format);

	i = 0;
	for(int it = 0; format[i] != NULL; i++)
	{
		if (format[i] ==  '%')
			i++;
	}
		if (format[i] == 's')
			i++;
	{
		char *s
			s = va_arg(arg_list, char*);	      
	       	int c;
	for(c = 0; s[c] != NULL; c++)
	}
	{
	putchar(s[c]);
		len++;
		}
	else
	{
	putchar(format[it]);
	len++;
	}

	va_end(arg_list);
	return len;	
}


