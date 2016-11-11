#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: an array
 * @size: size of array
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *c;

	if (size == 0 || nmemb == 0)
	{
		return (NULL);
	}
	c = malloc(nmemb);

	if (c == NULL)
	{
		return (NULL);
	}
	return (c);
}
