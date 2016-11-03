#include "holberton.h"

/**
 * find_sqr - finds square root of n
 * @n: squared variable
 * @num: variable
 * Return: square root of n
 */

int find_sqr(int n, int num)
{
	if (n == num * num)
	{
		return (num);
	}
	else if (n < num * num)
	{
		return (-1);
	}
	return (find_sqr(n, num + 1));
}

/**
 * _sqrt_recursion - prints square root of a number
 * @n: variable to squared
 * Return: int
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (find_sqr(n, 0));
}
