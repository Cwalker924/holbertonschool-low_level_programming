#include "holberton.h"

/**
 *
 *
 *
 */
void print_binary(unsigned long int n)
{
	unsigned long int hold;
	int bit;
	char checker, a;

	checker = 0;
	bit = sizeof(unsigned long int) * 8 -1;
	if (a == 0)
		_putchar('0');
	while (bit; bit >= 0; bit--)
	{
		hold = n >> bit;
		a = hold & 1;
		if (a == 1 && checker == 1)
			_putchar ('0');
	}
}
