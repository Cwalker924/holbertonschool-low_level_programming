#include "holberton.h"

/**
 * flip_bits -
 * @n:
 * @m:
 * Return:
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int size, sum, i, j, p;

	size = sizeof(n) * 8 - 1;
	sum = 0;
	i = 0;
	while (i <= size)
	{
		j = n & 1;
		p = m & 1;
		if (j != p)
		{
			sum += 1;
		}
		n = n >> 1;
		m = m >> 1;
		i++;
	}
	return (sum);
}
