#include "holberton.h"

/**
 * puts_half - splits and prints second half of string
 * @str: variable arg
 */
void puts_half(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	if (len % 2 != 0)
	{
		len++;
	}
	len /= 2;
	while (str[len] != '\0')
	{
		_putchar(str[len++]);
	}
	_putchar('\n');
}
