#include "holberton.h"

/**
 * print_alphabet_x10 - prints alpha 10 times
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int n = 0;

	while (n < 10)
	{
		int num = 'a';

		while (num < 'z')
		{
			_putchar(num);
			num++;
		}
		_putchar('\n');
		n++;
	}
}
