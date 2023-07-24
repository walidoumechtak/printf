#include "main.h"
#include <string.h>

/**
 * nbrlen - function that calc the length of a numb
 * @n: the num
 * Return: the length
 */

int	nbrlen(int n)
{
if (n == 0)
return (0);
return (1 + nbrlen(n / 10));
}

/**
 * _putnbr - funct that print a num to the std out
 * @n: the n should be printed
 * Return: the length of the n
 */
int _putnbr(int n)
{
int cnt = 0;
if (n < 0)
{
cnt++;
cnt += nbrlen(n);
}
if (n == -2147483648)
{
_putchar('_');
_putchar('2');
_putnbr(147483648);
return (1);
}
if (n >= 10)
{
_putnbr(n / 10);
_putnbr(n % 10);

}
if (n < 10)
{
_putchar(n + '0');
}
return (1);
}
