#include "main.h"

/**
 * print_char - prints a character
 * @args: character to print
 * Return: 1
 */

int print_char(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}

/**
 * print_string - prints a string
 * @args: string to print
 * Return: number of characters printed
 */

int print_string(va_list args)
{
	int i;
	char *str;

	str = va_arg(args, char *);
	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	return (i);
}

/**
 * print_percent - prints a percent sign
 * @args: character to print
 * Return: 1
 */
int print_percent(va_list args)
{
	_putchar('%');
	return (1);
}
