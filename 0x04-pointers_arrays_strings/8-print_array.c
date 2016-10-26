#include <stdio.h>
#include "holberton.h"

/**
 * print_array - prints an array and its index
 * @a: pointer variable
 * @n: repeat variable
 */
void print_array(int *a, int n)
{
	for (n = 0; n < 4; n++)
	{
		printf("%d, ", a[n]);
	}
	printf("%d", a[n]);
	printf("\n");
}
