#include "main.h"

/**
 * _printf - function similaire to print man (pirntf)
 * @format: char string
 * @...: variadic argument
 * Return: how many char are printed
 */

int _printf(const char *format, ...)
{
	va_list lst;
	int	i;
	int	size;

	va_start(lst, format);
	i = 0;
	size = 0;
	while (format[i])
	{
		if (format[i] == '%')
			size += _vprintf(lst, format[++i]);
		else
			size += _putchar(format[i]);
		i++;
	}
	return (size);
}
