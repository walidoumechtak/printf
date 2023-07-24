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
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1] != '\0')
			size += _vprintf(lst, format[++i]);
		else
			size += _putchar(format[i]);
		i++;
	}
	va_end(lst);
	return (size);
}
