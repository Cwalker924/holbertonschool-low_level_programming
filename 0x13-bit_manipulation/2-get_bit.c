#include "holberton.h"

/**
 * get_bit - a function that returns the value of a bit at a
 * given index.
 * @n: number passed in.
 * @index: place to evaluate
 * Return: int 1 or 0
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int j, c;

	if (n == 0)
		return (0);
	
	j = n >> index;
	c = j & 1;
	if (c == 1)
		return (1);
	else
		return (0);
}
