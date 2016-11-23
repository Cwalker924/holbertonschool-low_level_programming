#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *n;

	if (size < 0)
		return (NULL);

	n = malloc((size + 1) * sizeof(*n));

	if (n == NULL)
		return (NULL);
	
	for (i = 0, i < size, i++)
		n[i] = c;
	return (n);
}
