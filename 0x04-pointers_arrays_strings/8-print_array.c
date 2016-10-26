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

	for (i = 0; i < n - 1; i++)
	{
		printf("%d, ", *(a + i));
	}
	printf("%d", *(a + i));
	printf("\n");
}
