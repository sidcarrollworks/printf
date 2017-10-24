#include "holberton.h"

/**
 * _printihelp - prints out a number
 * @n: input number
 * Return: returns the sum
 */
int _printihelp(int n)
{
	unsigned int un;
	int sum = 0;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	if (n < 0)
	{
		_putchar('-');
		un = -n;
		sum++;
	}
	else
		un = n;

	if (un / 10)
		sum += _printihelp(un / 10);

	_putchar(un % 10 + '0');
	return (sum + 1);
}
