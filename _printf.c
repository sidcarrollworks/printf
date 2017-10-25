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
	if (format == NULL) /* If input is NULL return -1 */
		return (-1);
	va_start(list, format);
	while (format[i]) /* Iterate through string argument */
	{
		if (format[i] == '%') /* Find format specifier */
		{
			j = 0;
			if (!format[i + 1]) /* If char after % is NULL return -1 */
				return (-1);
			while (mods[j].mod) /* Iterate through struct */
			{
				if (format[i + 1] == *(mods[j].mod)) /* If match call print function */
				{
					sum += mods[j].f(list), i += 2; /* Assign num, move idx past specifier */
					break;
				}
				j++;
			}
			if (!mods[j].mod) /* If member is NULL print char at idx */
			{
				_putchar(format[i]), i++, sum++;
				_putchar(format[i]), i++, sum++;
			}
		}
		else
			_putchar(format[i]), i++, sum++; /* Print char at idx */
	}
	va_end(list);
	return (sum); /* Return # of chars printed */
}
