#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum range
 * @max: maximum range
 * Return: return array
 */
int *array_range(int min, int max)
{
	int *c;
	int n;

	if (min > max)
	{
		return (NULL);
	}

	c = malloc((max - min + 1) * sizeof(*c));

	if (c == NULL)
	{
		return (NULL);
	}
	for (n = 0; min <= max; n++, min++)
	{
		c[n] = min;
	}
	return (c);
}
