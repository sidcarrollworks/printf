#include "holberton.h"

/**
 *
 *
 */
int _printf(const char *format, ...)
{
	unsigned int i = 0;
	va_list list;
	form_mod mods[] {
		{"c", print_c},
		{"s", print_s},
		{"%", print_%},
		{"d", print_d},
		{"i", print_i},
		{NULL, NULL}
	};

	va_start(list, format);

	while(format && format[i])
	{
		if (format[i] != '%')
		{
			while (mods[i])
			{
				if (*
}
