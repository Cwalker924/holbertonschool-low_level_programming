#include "holberton.h"

/**
 * puts2 - prints everyother number
 * @str: variable pointer arg.
 */
void puts2(char *str)
{
	int x;

	x = 0;
	while (str[x] != '\0')
	{
		_putchar(str[x]);
		x += 2;
	}
}
