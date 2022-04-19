#include "main.h"

/**
 * _printf - produces output accrding to format
 * @format: character string composed of zero or more directives
 *
 * Return:  the number of characters printed
 * (excluding the null byte used to end output to strings)
 */

int _printf(const char *format, ...)
{
	va_list arguments;
	int sum = 0, n = 0;

	va_start(arguments, format);
	for (; format[n] != '\0'; n++)
	{
		if (format[n] == '\0')
			break;
		else if (format[n] == '%' && format[n + 1])
		{
			sum += (*converter(format[n + 1]))(arguments);
			n++;
		}
		else
		{
			sum += _putchar(format[n]);
		}
	}
	va_end(arguments);

	return (sum);
}
