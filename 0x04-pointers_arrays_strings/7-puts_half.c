#include "holberton.h"

/**
 * puts_half - splits and prints second half of string
 * @str: variable arg
 */
void puts_half(char *str)
{
	int half = 0;
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	if (len % 2 != 0)
	{
		half = (len - 1) / 2;
	}
	else
	{
		half = len / 2;
	}
	while (half <= len)
	{
		_putchar(str[half]);
		half++;
	}
	_putchar('\n');
}
