#include "holberton.h"
/**
 * print_triangle - prints a square
 * @size: variable
 */
void print_triangle(int size)
{
	int x, y, p;

	x = 0;
	if (size <= 0)
	{
		_putchar('\n');
	}
	y = size - 1;
	while (x < size)
	{
		y = size - 1 - x;
		p = x + 1;
		while (y > 0)
		{
			_putchar(' ');
			y--;
		}
		while (p > 0)
		{
			_putchar('#');
			p--;
		}
		_putchar('\n');
		x++;
	}
}
