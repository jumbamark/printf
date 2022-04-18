#include "main.h"

/**
 * _printf - produces output accrding to format
 * @format: character string composed of zero or more directives. 
 *
 * Return:  the number of characters printed (excluding the null byte used * to end output to strings)
 */

int _printf(const char *format, ...)
{
	int sum = 0;
	int i = 0;

	while (format[i] != '\0')
	{
		sum++;
		i++;
	}

	return (sum);
}
