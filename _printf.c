#include "holberton.h"
/**
 * _printf - replicates the printf function
 * @format: input string with format modifiers
 * Return: number of characters
 */
int _printf(const char *format, ...)
{
	unsigned int i = 0, j = 0, sum = 0;
	va_list list;
	form_mod mods[] = {
		{"c", print_c},
		{"s", print_s},
		{"i", print_i},
		{"d", print_i},
		{"%", print_p},
		{NULL, NULL}
	};
	if (format == NULL)
		return (-1);
	va_start(list, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			j = 0;
			if (!format[i + 1])
				return (-1);
			while (mods[j].mod)
			{
				if (format[i + 1] == *(mods[j].mod))
				{
					sum += mods[j].f(list), i += 2;
					break;
				}
				j++;
			}
			if (!mods[j].mod)
			{
				_putchar(format[i]), i++, sum++;
				_putchar(format[i]), i++, sum++;
			}
		}
		else
			_putchar(format[i]), i++, sum++;
	}
	va_end(list);
	return (sum);
}
