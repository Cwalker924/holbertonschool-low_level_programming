#include "holberton.h"

int find_prime(int n, int base)
{
	if (base == 2)
		return (1);
	else if (base % n == 0 || base < 2)
		return (0);
	else if (n == base -1)
		return (1);
	else if (base < n)
		return (find_prime(n + 1, base));
	return (1);
}

int is_prime_number(int n)
{
	return(find_prime(2, n));
}
