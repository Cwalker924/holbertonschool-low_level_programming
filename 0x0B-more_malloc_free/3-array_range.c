#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *
 *
 *
 *
 */
int *array_range(int min, int max)
{
	int *c;
	int n;

	if (min > max)
	{
		return (NULL);
	}

	c = malloc((max + 1) * sizeof(int));
/*	c = malloc((max - min + 1) * sizeof(*c));*/
	if (c == NULL)
	{
		return (NULL);
	}
	for (n = 0; min <= max; n++, min++)
	{
		c[n] = min;
	}
	return(c);
}
