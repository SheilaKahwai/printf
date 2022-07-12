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
