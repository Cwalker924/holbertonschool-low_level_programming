#include "holberton.h"
#inlcude <stdio.h>

/**
 *
 */
void multiples(void)
{
	int a;

	a = 0;
	sum = 0;
	while (a <= 1024)
	{
		if (3 % a == 0)
		{
			sum += a;
		}
		if (5 % a == 0)
		{
			sum += a;
		}
		a++;
	}
	printf(sum);
	_putchar('\n');
}