#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

void *malloc_checked(unsigned int b)
{
	unsigned int *c;

	c = malloc(b);
	if (c == NULL)
		exit(98);
	return (c);
}
