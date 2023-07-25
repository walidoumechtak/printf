#include "main.h"
#include <string.h>

/**
 * _putnbr - funct that print a num to the std out
 * @n: the n should be printed
 * Return: the length of the n
 */

int _putnbr(int n)
{
	int	cnt;

	cnt = 1;
	if (n == -2147483648)
	{
		_putchar('-');
		cnt += _putstr("2147483648");
		return (cnt);
	}
	if (n < 0)
	{
		cnt += _putchar('-');
		n *= -1;
	}
	if (n >= 10)
		cnt += _putnbr(n / 10);
	_putchar(n % 10 + '0');
	return (cnt);
}
