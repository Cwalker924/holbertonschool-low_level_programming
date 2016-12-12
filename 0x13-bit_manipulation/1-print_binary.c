#include "holberton.h"

/**
 * print_binary - a function that prints the binary representation of a number.
 * @n: number to convert
 */
void print_binary(unsigned long int n)
{
	unsigned long int hold;
	int bit;
	char checker, a;

	checker = 0;
	bit = sizeof(unsigned long int) * 8 - 1;
	if (n == 0)
		_putchar('0');
	while (bit >= 0)
	{
		hold = n >> bit;
		a = hold & 1;
		if (a == 0 && checker == 1)
			_putchar ('0');
		else if (a == 1)
		{
			checker = 1;
			_putchar ('1');
		}
		bit--;
	}
}
