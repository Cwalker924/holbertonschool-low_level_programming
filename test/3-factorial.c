#include "holberton.h"

/**
 * factorial - returns factorial of a number
 * @n: integer variable input
 * Return: int
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1 || n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
