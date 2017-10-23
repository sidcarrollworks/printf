#include "holberton.h"
/**
 * _printf - replicates the printf function
 * @format: input string with format modifiers
 * Return: number of characters
 */
int _printf(const char *format, ...)
{
	unsigned int i = 0, j = 0;
	va_list list;
	int sum = 0;
	form_mod mods[] = {
		{"c", print_c},
		{"s", print_s},
		{"d", print_i},
		{"i", print_i},
		{"%", print_p},
		{NULL, NULL}
	};

	va_start(list, format);
	while(format && format[i])
	{
		if (format[i] == '%')
		{
			while (mods[j].mod)
			{
				/* explain */
				if (format[i + 1] == *(mods[j].mod))
				{
					sum += mods[j].f(list);
					i += 2;
				}
				j++;
			}
		}
		/* print characters here */
		_putchar(format[i]);
		sum++;
		i++;
	}
	if (format == NULL)
		sum = -1;
	va_end(list);
	return (sum);
}
