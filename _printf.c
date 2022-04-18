#include <stdio.h>
#include "main.h"

/**
 * _printf - produces output accrding to format
 * @format: character string composed of zero or more directives. 
 *
 * Return:  the number of characters printed (excluding the null byte used * to end output to strings)
 */

int _printf(const char *format, ...)
{
	int sum = 0, i = 0;

	while (format[i] != '\0')
	{
<<<<<<< HEAD
		printf("%s", format[i]);
=======
		printf("%c", format[i]);
>>>>>>> 2f1405bf8e4e4aeb02339419cece9efda50f28ad
		sum++;
		i++;
	}

	return (sum);
}
