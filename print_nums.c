#include "main.h"

/**
 * print_int - prints an integer
 * @args: integer to print
 * Return: no. of characters printed
 */

int print_int(va_list args)
{
	int n, res;

	n = va_arg(args, int);
	res = count_digit(n);

	if (n <= 0)
		res++;
	print_number(n);
	return (res);
}

/**
 * print_number - loops through an integer and prints its digits
 * @n: integer to print
 */
void print_number(int n)
{
	unsigned int x;

	if (n < 0)
	{
		_putchar('-');
		x = -n;
	}
	else
		x = n;

	if (x / 10)
		print_number(x / 10);
	_putchar((x % 10) + '0');
}

/**
 * count_digit - counts number of digits in an integer
 * @x: integer to evaluate
 * Return: number of digits
 */
int count_digit(int x)
{
	unsigned int d;
	unsigned int u;

	d = 0;

	if (x < 0)
		u = x * -1;
	else
		u = x;
	while (u != 0)
	{
		u /= 10;
		d++;
	}
	return (d);
}

