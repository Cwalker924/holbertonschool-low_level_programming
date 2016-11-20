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
	unsigned int sum, num, i;
	va_list lst;

	va_start(lst, n);

	if (n == 0)
		return (0);

	sum = 0;
	for (i = 0; i < n; i++)
	{
		num = va_arg(lst, unsigned int);
		sum += num;
	}
	va_end(lst);
	return (sum);
}
