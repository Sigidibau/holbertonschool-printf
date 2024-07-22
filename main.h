#ifndef Print_Func
#define Print_Func

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 *
 *
 *
 *
 *
 *
 */

typedef struct converter_s
{
       unsigned char specifier;
       unsigned int (*fun)(va_list ap);
}convert_t;

/*printf*/
int _printf(const char *format, ...);

/*get up*/
unsigned int (*get_specifier(const char *specifier))(va_list, unsigned char, int, int, unsigned char);

/*putchar*/
int _putchar(char c);

#endif

