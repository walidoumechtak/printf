#include "main.h"

/**
 * _vprintf - function that check what is the flag after % and print it
 * @lst: the struct conatine all the information about the variadic arguments
 * @c: the char after %
 * Return: length of char printed
 */

int	_vprintf(va_list lst, char c)
{
	if (c == '%')
		return (_putchar('%'));
	else if (c == 'c')
		return (_putchar(va_arg(lst, int)));
	else if (c == 's')
		return (_putstr(va_arg(lst, char *)));
	else
		return (_putchar(c));
	return (0);
}
