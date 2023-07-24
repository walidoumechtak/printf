#include "main.h"
#include <string.h>

/**
 * _strlen - function that calc the length of a string
 * @str: the string
 * Return: the length
 */

int	_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

/**
 * _putstr - funct that print a string to the std out
 * @str: the string should be printed
 * Return: the length of the string
 */

int	_putstr(char *str)
{
	int	i;

	i = 0;
	if (!str)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	return (_strlen(str));
}
