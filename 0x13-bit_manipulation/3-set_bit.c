#include "holberton.h"

/**
 * set_bit -  a function that sets the value of a bit to
 * 1 at a given index.
 * @n: value passed
 * @index: place in binary to change to one
 * Return: int n with selected value truned on(1)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int j;

	if (!n)
		return (-1);
	if (n == 0)
		return (1);
	if (index > 63)
		return (-1);

	j = 1 << index;
	*n = *n ^ j;

	return (*n);

}
