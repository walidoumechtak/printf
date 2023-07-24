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
	int	ret;

	va_start(lst, format);
	i = 0;
	size = 0;
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	while (format[i])
	{
		if (format[i] == '%')
		{
			ret = _vprintf(lst, format[++i]);
			if (ret == -1)
				return (-1);
			size += ret;
		}
		else
			size += _putchar(format[i]);
		i++;
	}
	va_end(lst);
	return (size);
}
