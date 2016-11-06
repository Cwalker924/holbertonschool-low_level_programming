#include "holberton.h"

/**
 * _pow_recursion - returns x raised by y
 * @x: variable input
 * @y: variaple input that x is raised to
 * Return: int or -1 if there is an error
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
