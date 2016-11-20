#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_strings - prints strings
 * @separator: "," delimiter
 * @n: number of arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *ch;
	va_list lst;

	va_start(lst, n);

	for (i = 0; i < n; i++)
	{
		ch = va_arg(lst, char *);
		if (ch == NULL)
			printf("(nil)");
		else
			printf("%s", ch);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(lst);
}
