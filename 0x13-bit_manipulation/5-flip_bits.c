#include "holberton.h"

/**
 * flip_bits -
 * @n:
 * @m:
 * Return:
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int j;

	j = n ^ m;
	return (j);
}
