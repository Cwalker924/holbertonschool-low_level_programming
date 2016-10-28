#include "holberton.h"
/**
 * reverse_array - reverses an array
 * @a: array arg
 * @n: number of elements
 * Return: n/a
 */
void reverse_array(int *a, int n)
{
	int start, end, i;

	i = 0;
	while (a[i] < a[n-1])
	{
		start = a[i];
		end = a[n];
		a[i++] = end;
		a[n--] = start;
	}
}
