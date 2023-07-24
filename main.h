#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

int _printf(const char *format, ...);
int	_putchar(char c);
int	_vprintf(va_list lst, char c);
int	_putstr(char *str);

#endif /* _MAIN_H_ */
