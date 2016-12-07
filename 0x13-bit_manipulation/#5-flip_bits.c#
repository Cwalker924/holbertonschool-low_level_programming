#include "holberton.h"

/**
 * flip_bits - returns the number of bits you would need to
 * flip to get from one number to another.
 * @n: first numbert to compare
 * @m: second number to compare
 * Return: number of differences.
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
