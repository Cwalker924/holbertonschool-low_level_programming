#include "holberton.h"
/**
 *
 *
 */
void print_rev(char *s)
{
	int x, y;

	x = 0;
	while(s[x] != '\0')
	{
		x++;
	}

	y = 0;
	while (x >= y)
	{
		_putchar(s[x]);
		x--;
	}
	_putchar('\n');
}
