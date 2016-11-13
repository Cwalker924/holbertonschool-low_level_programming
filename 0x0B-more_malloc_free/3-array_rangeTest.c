#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

int *array_range(int min, int max)
{
	int *c, i;

	if (min > max)
		return (NULL);

	c = malloc((max-min + 1) * sizeof(*c));

	if (c == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		c[i] = min;

	return (c);
}
