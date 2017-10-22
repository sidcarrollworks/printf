#ifndef HOLBERTON.H
#define HOLBERTON.H
#include <stdarg.h>
#define NULL 0L
typedef struct mod
{
	char *mod;
	int (*f)(va_list);
} form_mod;

int _printf(const char *format, ...);

#endif
