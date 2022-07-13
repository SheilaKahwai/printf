#include "main.h"

/**
 * DectoBase - converts numbers from base 10 to any base
 * @n: number to convert
 * @base: base to convert to
 * @Lwr: flag to specify conversion to lowercase hexdecimal
 * Return: pointer to string of converted number
 */

char *DectoBase(unsigned long int n, int base, int Lwr)
{
	static char buff[50];
	char *ptr;

	static char *Rep;

	Rep = (Lwr)
		? "0123456789abcdef"
		: "0123456789ABCDEF";

	ptr = &buff[49];
	*ptr = '\0';

	do {
		*--ptr = Rep[n % base];
		n /= base;
	} while (n != 0);

	return (ptr);
}
