#include "holberton.h"

void _printihelp(int n)
{
	if (n == 0)
		_putchar('0');

	if (n < 0 )
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10)
		_printihelp(n / 10);

	_putchar(n % 10 + '0');
}

int print_nums(va_list list)
{
	int n = va_list(list, int);
	int len = 0;
	int div = 1;
	int num;

	num = n;
	if (n < 0)
	{
		_putchar('-');
		num *= -1;
		len++;
	}
	else
	{
		num = n;
		while ((num / 10) >= 10)
		{
			div *= 10;
		}
		while (div > 0)
		{
			_putchar((num / div) + '0');
			num %= div;
			div /= 10;
			len++;
		}
	}
	return (len);
}
