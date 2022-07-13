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
int print_percent(__attribute__((unused))va_list args)
{
	_putchar('%');
	return (1);
}

/**
 * print_bigS - non-printable chars are printed like this:
 * \x folled by their hexadecimal value
 * @args: string to print
 * Return: no. of characters printed
 */
int print_bigS(va_list args)
{
	int i, count;
	char *str;
	char *c;

	count = 0;

	str = va_arg(args, char *);
	if (str == NULL)
		return (_puts("(null)"));
	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] > 0 && str[i] < 32) || str[i] >= 127)
		{
			_puts("\\x");
			count += 2;
			c = DectoBase(str[i], 16, 0);
			if (!c[1])
				count += _putchar('0');
			count += _puts(c);
		}
		else
			count += _putchar(str[i]);
	}
	return (count);
}
		
