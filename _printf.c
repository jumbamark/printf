#include <stdio.h>
#include "main.h"

/**
 * _printf - produces output according to format
 * @format: character string composed of zero or more directives
 *
 * Return: the number of characters printed
 */

int _printf(const char *format, ...)
{
	int sum = 0, i = 0;

	while (format[i] != '\0')
	{
		printf("%s", format[i]);
		sum++;
		i++;
	}

	return (sum);
}
