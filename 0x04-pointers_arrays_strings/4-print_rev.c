#include "holberton.h"

/**
 * print_rev - prints a reverse string
 * @s: single character pointer variable
 */
void print_rev(char *s)
{
	int x;

	x = 0;
	while (s[x] != '\0')
	{
		x++;
	}
	x--;

	while (s[x] != 0)
	{
		_putchar(s[x]);
		x--;
	}
	_putchar('\n');
}
