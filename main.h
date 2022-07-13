#ifndef MAIN_H
#define MAIN_H

#include<stdarg.h>
#include<string.h>
#include<unistd.h>

/**
 * struct format - struct to choose the right function depending
 * on the format specifier
 * @sp: format specifier
 * @f: pointer to the corresponding printing function
 */
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
int print_int(va_list args);
void print_number(int n);
int count_digit(int x);
int print_binary(va_list args);
char *DectoBase(unsigned int n, int base, int Lwr);
int print_octal(va_list args);
int print_hexUpr(va_list args);
int print_hexLwr(va_list args);
int print_unsint(va_list args);
int print_bigS(va_list args);
int print_address(va_list args);

#endif
