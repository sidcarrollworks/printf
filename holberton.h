#ifndef HOLBERTON.H
#define HOLBERTON.H
#include <stdarg.h>

typedef struct mod
{
	char *mod;
	int (*f)(int a, int b);
} form_mod;

int _printf(const char *format, ...);

#endif
