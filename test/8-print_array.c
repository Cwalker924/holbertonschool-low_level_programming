#include <stdio.h>
#include "holberton.h"

/**
 * print_array - prints an array and its index
 * @a: pointer variable
 * @n: repeat variable
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
}
