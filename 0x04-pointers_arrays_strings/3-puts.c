#include "holberton.h"

/**
 * _puts - prints a string
 * @*str: pointer variable
 */
void _puts(char *str)
{
	int c, x;

	c = 0;
	while (str[c] != '\0')
	{
		c++;
	}

	x = 0;
	while (x <= c)
	{
		_putchar(str[x]);
		x++;
	}
	_putchar('\n');
}
