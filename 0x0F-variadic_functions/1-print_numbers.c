#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers
 * @separator: "," delimiter
 * @n: number of arguemnts passed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, num;
	va_list lst;

	va_start(lst, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(lst, unsigned int);
		if (i == n - 1)
			printf("%d\n", num);
		else
			printf("%d%s ", num, separator);
	}
	va_end(lst);
}
