#include "holberton.h"

int find_root(int n, int num)
{
	if (n == num * num)
		return (num);
	if (n < num * num)
		return (-1);
	return (find_root(n, num + 1));
}

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (find_root(n, 0));
}
