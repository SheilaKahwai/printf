#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: format string containing characters and specifiers
 * Return: total number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	const char *trav;
	int (*pfunc)(va_list);

	int count = 0;

	va_start(args, format);

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);

	for (trav = format; *trav; trav++)
	{
		if (*trav == '%')
		{
			trav++;
			pfunc = get_print(*trav);
			count += pfunc(args);
		}
		else
			count += _putchar(*trav);
	}
	va_end(args);
	return (count);
}

