#include "main.h"

/**
 * get_print - selects the right printing function
 * depending on the conversion specifier passed to _printf
 * @s: character that holds the conversion specifier
 * Description: the function loops through the structs array
 * specs[] to find a match between the specifier passed to _printf
 * and the first element of the struct, and then the approriate
 * printing function
 * Return: a pointer to the matching printing function
 */

int (*get_print(char s))(va_list)
{
fmt specs[] = {
{'c', print_char},
{'s', print_string},
{'%', print_percent},
{'i', print_int},
{'d', print_int}
};

int ops = 5;
int i;

for (i = 0; i < ops ; i++)
{
if (specs[i].sp == s)
return (specs[i].f);
}

return (NULL);
}
