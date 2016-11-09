#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates a block of memory using
 *  malloc and fills it with a character
 *
 *@size: array size
 * @c: character to put in array
 * Return: array otherise NULL
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (p == NULL)
	{
		return (NULL);
	}

	p = malloc(size * sizeof(char));

	i = 0;
	while (i < size)
	{
		p[i] = c;
		i++;
	}
	return (p);
	free(p);
}
