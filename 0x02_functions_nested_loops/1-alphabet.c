#include "holberton.h"

/**
 * print_alphabet - prints a-z
 * Return: 0
 */
void print_alphabet(void)
{
	int num = 'a';

	while (num <= 'z')
	{
		_putchar(num);
		num++;
	}
	_putchar('\n');
}
