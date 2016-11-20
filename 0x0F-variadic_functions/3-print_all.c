#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: format of arguement
 */
void print_all(const char * const format, ...)
{
	int i;
	char n;
	va_list(lst);

	va_start(lst, format);

	i = 0;
	while(i < format[i])
	{
		n = va_arg(lst, char *);
		if (*format == c || *format == s)
		{
			printf("%s, ", n);
		}
		if (format == i || format == f)
		{
			printf("%d, ", n);
		}
		i++;
	}
	va_end(lst);
	printf("\n");
}
