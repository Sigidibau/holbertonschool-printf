#ifndef P_F
#define P_F

#include <stdlib.h>
#include <stdarg.h>

/**
 *
 *
 *
 *
 *
 *
 */

typedef struct print
{
        char c;
        int (*f)(va_list ap);
};print;
:
/*printf*/
int _printf(const char *format, ...);

/*get up*/
int (*get_print(char s, flags_t *f);

#endif

