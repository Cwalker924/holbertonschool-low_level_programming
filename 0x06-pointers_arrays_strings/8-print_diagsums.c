#include <stdio.h>
#include "holberton.h"

/**
 * print_diagsums - a function that prints the sum of the two
 * diagonals of a square matrix of integers
 * @a: variable pointer of a matrix
 * @size: starting point to begin the diagonal sum
 */
void print_diagsums(int *a, int size)
{
	int i, sum;

	i = 0;
	sum = 0;
	while (i < size)
	{
		sum += *(a + i);
		i++;
		a = a + size;
	}
	printf("%d, ", sum);

	a = a - size;
	sum = 0;
	i = 0;
	while (i < size)
	{
		sum = sum + *(a + i);
		i++;
		a = a - size;
	}
	printf("%d\n", sum);
}
