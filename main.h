#ifndef MAIN_H
#define MAIN_H

#include<stdarg.h>
#include<string.h>
#include<unistd.h>

typedef struct format
{
char sp;
int (*f)(va_list args);
} fmt;

int _printf(const char *format, ...);
int _puts(char *str);
int _putchar(char c);
int (*get_print(char s))(va_list);
int print_percent(va_list args);
int print_string(va_list args);
int print_char(va_list args);

#endif
