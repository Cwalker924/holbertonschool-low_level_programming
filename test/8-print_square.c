#include "holberton.h"
/**
 * print_square - prints a grid depending on input
 * @size: variable input
 */
void print_square(int size)
{
	int x, y;

	x = 0;
	while (x < size)
	{
		y = 0;
		while (y < size)
		{
			_putchar('#');
			y++;
		}
		_putchar('\n');
		x++;
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
