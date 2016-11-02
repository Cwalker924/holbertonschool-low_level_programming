#include "holberton.h"
/**
 * _print_rev_recursion - prints a revers string
 * @s: pointer variable to a string
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
