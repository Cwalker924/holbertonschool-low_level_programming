#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a newly created 2
 * dimensional integers grid
 *
 * @width: width of grid
 * @height: height of grid
 * Return: grid
 */
int **alloc_grid(int width, int height)
{
	int **c, i, j, k;

	c = malloc(height * sizeof(int *));
	if (c == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		c[i] = malloc(width * sizeof(int));
		if (c[i] == NULL)
			return (NULL);
	}
	for (j = 0; j < height; j++)
	{
		for (k = 0; k < width; k++)
		{
			c[j][k] = 0;
		}
	}
	return (c);
}
