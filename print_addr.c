#include "main.h"

/**
 * print_address - prints address in hexadecimal
 * @args: address to print
 * Return: no. of characters printed
 */
int print_address(va_list args)
{
	unsigned long int x;
	char *str;
	int count;

	count = 0;

	x = va_arg(args, unsigned long int);
	if (!x)
		return (_puts("(nil)"));
	str = DectoBase(x, 16, 1);
	count += _puts("0x");
	count += _puts(str);

	return (count);
}
