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
