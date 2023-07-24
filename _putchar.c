#include "main.h"

/**
 * _putchar - function that print a single char
 * @c: the char should be printed
 * Return: allways 1
 */

int	_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}
