#include "holberton.h"
/**
 * main - check the code for Holberton School students.
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
