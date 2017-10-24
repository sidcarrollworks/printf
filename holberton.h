#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>
#include <stdlib.h>
/**
 * struct f_mod - structure
 * @mod: the function modifier that we are comparing
 * @f: the function pointer
 */
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
int print_p(va_list list);
void _printihelp(int n);

#endif
