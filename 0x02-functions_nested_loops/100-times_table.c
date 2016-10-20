#include "holberton.h"

/**
 * print_times_tables - prints multiplication grid
 * @n: arguemtn for times tables
 * Return: n/a
 */
void print_times_table(int n)
{
	int x, y;

	x = 0;
	if (n >= 0 && n < 15)
	{
		while (x <= n)
		{
			_putchar('0');
			y = 1;
			while (y <= n)
				spaces(x * y++);
			_putchar('\n');
			x++;
		}
	}
}

/**
 * spaced - formats the spaces
 * @n: argument to format
 * Return: n/a
 */
void spaces(int n)
{
	if (n < 10)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(' ');
		_putchar(n + '0');
	}
	else if (n >= 10 && n < 100)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
	else
	{
		_putchar(',');
		_putchar(' ');
		_putchar(n / 100 + '0');
		_putchar(n / 10 % 10 + '0');
		_putchar(n % 10 + '0');
	}
}
