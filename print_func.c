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
 * print_number - prints a number
 * @x: number to print
 * Return: number of characters printed
 */
int print_number(int x)
{
	unsigned int n;

	int count = 0;

	if (x < 0)
	{
		count += _putchar('-');
		n = -x;
	}
	else
		n = x;

	if (n / 10)
	{
		print_number(n / 10);
	}
	count += _putchar ((n % 10) + '0');

	return (count);
}

/**
 * print_int- prints an integer
 * @args: integers to print
 * Return: number of characters printed
 */
int print_int(va_list args)
{
	int x;
	int count;

	x = va_arg(args, int);
	count = print_number(x);
	return (count);
}
