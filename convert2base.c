#include "main.h"

/**
 * DectoBase - converts numbers from base 10 to any base
 * @n: number to convert
 * @base: base to convert to
 * Return: pointer to string of converted number
 */

char *DectoBase(unsigned int n, int base)
{
	static char buff[50];
	char *ptr;

	static char Rep[] = "0123456789ABDEF";

	ptr = &buff[49];
	*ptr = '\0';

	do {
		*--p = Rep[n % base];
		n /= base;
	} while (n != 0);

	return (ptr);
}
