#include "holberton.h"
/**
 * main - prints 'a'-'z'
 * Return: Always 0.
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
