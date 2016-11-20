#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - adds arguments togather
 * @n: total number of arguemnts
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0, i;
	va_list lst;

	va_start(lst, n);

	for (i = 0; i < n; i++)
	{
		unsigned int num = va_arg(lst, unsigned int);

		sum += num;
	}
	va_end(lst);
	return (sum);
}
