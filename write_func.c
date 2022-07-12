#include "main.h"

/**
 * _putchar - prints a character
 * @c: character to print
 * Return: formatted output
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _puts - prints a string
 * @str: string to print
 * Return: no. of characters printed
 */

int _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	return (i);
}
