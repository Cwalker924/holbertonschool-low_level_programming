#include "holberton.h"
/**
 * print_diagonal - prints a '\'
 * @n: variable argument
 */
void print_diagonal(int n)
{
	int f;
	int i;

	f = 0;
	if (n <= 0)
	{
		_putchar('\n');
	}
	while (f < n)
	{
		i = f;
		while (i > 0)
		{
			_putchar(' ');
			i--;
		}
		_putchar('\\');
		_putchar('\n');
		f++;
	}
}
