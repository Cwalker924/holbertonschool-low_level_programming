#include "holberton.h"

/**
 * print_last_digit - prints the last digit
 *
 */
int print_last_digit(int c)
{
	int num;

	if (c < 0)
	{
		c *= -1;
	}
       	num = (c % 10);
       	_putchar(num + '0');
	return (num);
}
