#include "main.h"

/**
 *get_print - choose the right 
 *@s: char with the specifier
 *eg: this func is going to loop the array of struct
 *return: pointer to the matching print.
 */

unsigned int (*get_specifier(const char ))(va_list, unsigned char, int, int, unsigned char)
{
	int i;
	converter_t converters[] = {
		{'c', convert_c},
		{'s', convert_string},
		{'%', convert_percent},
		{'d', convert_dec},
		{'i', convert_int},
		{NULL,NULL},
	};

	for (i = 0; converters[i].func; i++)
	{
		if (converters[i].specifier == *specifier)
			return (converters[i].func);
	}
	return (NULL);
}
