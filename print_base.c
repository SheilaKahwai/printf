#include "main.h"

/**
 * print_binary - prints a binary number
 * @args: binary number to print
 * Return: no. of characters printed
 */

int print_binary(va_list args)
{
	unsigned int x;
	char *str;

	x = va_arg(args, unsigned int);
	str = DectoBase(x, 2);

	return (_puts(str));
}

/**
 * print_octal - prints an octaldecimal number
 * @args: number to print
 * Return: no. of characters printed
 */
int print_octal(va_list args)
{
	unsigned int x;
	char *str;

	int count = 0;

	x = va_arg(args, unsigned int);
	str = DectoBase(x, 8, 0);

	count += _puts(str);
	return (count);
}

/**
 * print_hexLwr - prints hexadecimal number in lowercase
 * @args: number to print
 * Return: no. of characters printed
 */

int print_hexLwr(va_list args)
{
	unsigned int x;
	char *str;
	
	int count = 0;

	x = va_arg(args, unsigned int);
	str = DectoBase(x, 16, 1);

	count += _puts(str);
	return (count);
}

/**
 * print_hexUpr - prints hexadecimal number in uppercase
 * @args: number to print
 * Return: no. of characters printed
 */
int print_hexUpr(va_list args)
{
	unsigned int x;
	char *str;

	int count = 0;

	x = va_arg(args, unsigned int);
	str = DectoBase(x, 16, 0);

	count += _puts(str);
	return (count);
}
