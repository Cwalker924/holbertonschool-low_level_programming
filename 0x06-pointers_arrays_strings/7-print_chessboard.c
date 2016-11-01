#include "holberton.h"

/**
 * print_chessboard - function that prints a chessboard
 * @a: variable pointer for an array
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	i = 0;
	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			_putchar((*a)[j]);
			j++;
		}
		_putchar('\n');
		i++;
		a++;
	}
}
