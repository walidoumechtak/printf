#include "main.h"
#include <string.h>

/**
 * _putstr - funct that print a string to the std out
 * @str: the string should be printed
 * Return: the length of the string
 */

int	_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	return (strlen(str));
}
