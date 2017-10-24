#include "holberton.h"
#include <stdio.h>
/**
 * _printf - replicates the printf function
 * @format: input string with format specifications
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	unsigned int i, j, sum;
	va_list list;
	form_mod mods[] = {
		{"c", print_c},
		{"s", print_s},
		{"d", print_i},
		{"i", print_i},
		{"%", print_p},
		{NULL, NULL}
	};

	if (format == NULL) /* If string input is NULL, return -1 */
		return (-1);
	va_start(list, format);
	i = 0, j = 0, sum = 0; /* i is the format index, j is the struct index, sum is the # of chars printed */
	while (format[i]) /* Iterate through string argument */
	{
		if (format[i] == '%') /* Find format specifier */
		{
			j = 0;
			if (!format[i + 1]) /* If the char after the format specifier is NULL, return -1 */
				return (-1);
			while (mods[j].mod) /* Iterate through struct */
			{
				if (format[i + 1] == *(mods[j].mod)) /* Evaluate char after the format specifier and implement corresponding print function if there is a match */
				{
					sum += mods[j].f(list), i += 2; /* Assign # of printed chars to the sum variable, and move format string index to the element after the format specifier */
					break;
				}
				j++;
			}
			if (!mods[j].mod) /* If struct member is NULL, print char at format[i] and the following char, and increment format index and sum variable accordingly */
			{
				_putchar(format[i]), i++, sum++;
				_putchar(format[i]), i++, sum++;
			}
		}
		else /* Print char at format[i], and increment both the format index and the sum variable */
			_putchar(format[i]), i++, sum++;
	}
	va_end(list);
	return (sum); /* Return # of characters printed */
}
