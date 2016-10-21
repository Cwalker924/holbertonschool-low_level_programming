#include "holberton.h"
#include <math.h>

int power(int a, int b)
{
	int val = a;

	if (b == 0)
	{
		return (1);
	}

	while (b > 1)
	{
		val *= a;
		b--;
	}
	return (val);
}

void print_number(int n)
{
	int size, ph, digit;

	size = 0;

	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}

	ph = n;
	while (ph/10 != 0)
	{
		ph = ph / 10;
		size++;
	}
	ph = n;
	while (size >= 0)
	{
		digit = ph / power(10, size);
		_putchar(digit + '0');
		ph = ph % power(10, size);
		size--;
	}
}
