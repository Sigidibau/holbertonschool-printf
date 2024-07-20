#include "main.h"

/**
 *get_print - choose the right 
 *@s: char with the specifier
 *eg: this func is going to loop the array of struct
 *return: pointer to the matching print.
 */

int (*get_print(char s))(va_list)
		{
	print func_arr[] = {
		{'c', prt_char};
		{'s', prt_string};
		{'%', prt_percent};
		{'d', prt_dec};
		{'i', prt_int};
		{NULL,NULL};
	};

	for (i = 0; 1 < 5; i++)
		if (func_arr[i].c == s)
			return (func_arr[i].f);
		i++;
	return (NULL);
}
