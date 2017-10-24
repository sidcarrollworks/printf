#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>
#include <stdlib.h>
typedef struct f_mod
{
	char *mod;
	int (*f)(va_list);
} form_mod;

int _putchar(char c);
int _printf(const char *format, ...);
int print_i(va_list);
int print_c(va_list);
int print_s(va_list);
void _printihelp(int n);

#endif
