#include "holberton.h"

/**
 * find_prime - finds a prim number
 * @num: first arg
 * @n: second arg
 * Return: 0
 */
int find_prime(int num, int n)
{
	if (n < num && num % n != 0)
	{
		return (find_prime(num, n + 1));
	}
	if (n < num && num % n == 0)
	{
		return (0);
	}
	if (n == num)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 * is_prime_number - checks if a number is a prime number
 * @n: variable arg
 * Return: the prime number
 */
int is_prime_number(int n)
{
	return (find_prime(n, 2));
}
