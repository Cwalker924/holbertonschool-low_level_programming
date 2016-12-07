#include "holberton.h"

/**
 * clear_bit - a function that sets the value of a bit to 0
 * at a given index.
 * @n: number being passed in
 * @index: place in (n) to change to 0
 * Return: 1 if successful, otherwise -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int j;

	if (!n)
		return (-1);
	if (index > 63)
		return (-1);

	if (*n > 0)
	{
		j = 1 << index;
		*n = *n ^ j;
	}
	else
	{
		j = 1 << index;
		*n = *n & j;
	}
	return (1);
}
