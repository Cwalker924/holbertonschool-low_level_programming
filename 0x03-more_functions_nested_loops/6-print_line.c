#include "holberton.h"
/**
 * print_line - prints '_' depending on input number
 */
void print_line(int n)
{
	int num;

	for (num = 0 ; num < n ; num++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
