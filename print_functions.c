#include "holberton.h"

/**
 * print_i - prints an integer number
 * @list: input args
 * Return: return the sum
 */
int print_i(va_list list)
{
	int n = va_arg(list, int);

	return (_printihelp(n));
}

/**
 * print_c - prints a character
 * @list: input arg
 * Return: return the sum
 */
int print_c(va_list list)
{
	char c = va_arg(list, int);

	_putchar(c);
	return (1);
}

/**
 * print_s - prints a string
 * @list: input arg
 * Return: reutnr sum
 */

int print_s(va_list list)
{
	int i = 0;
	int sum = 0;
	char *s = va_arg(list, char *);

	if (s == NULL)
		s = "(null)";
	while (s[i])
	{
		_putchar(s[i]);
		i++, sum++;
	}
	return (sum);
}
/**
 * print_p - handles the %
 * @list: arg list
 * Return: retuns 1
 */
int print_p(va_list list)
{
	(void) list;
	_putchar('%');
	return (1);
}
