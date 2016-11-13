#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: points to privously allocated memory
 * @old_size: old malloc space
 * @new_size: new melloc space
 * Return: void
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *c, *new_mem;
	void *n;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	else if (new_size < old_size)
		old_size = new_size;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	else if (ptr == NULL)
	{
		n = malloc(new_size);
		free(ptr);
		return (n);
	}

	if (new_size > old_size)
	{
		c = malloc(old_size * sizeof(ptr));
	}

	c = malloc(new_size);
	if (c == NULL)
		return (NULL);

	new_mem = ptr;
	n = c;
	for (i = 0; i < old_size; i++)
		c[i] = new_mem[i];
	free(ptr);
	return (n);
}
