#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers
 * @separator: "," delimiter
 * @n: number of arguemnts passed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list lst;

	va_start(lst, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(lst, unsigned int));
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(lst);
}
