#include "holberton.h"
#include <stdio.h>
/**
 * _isupper - returns 1 if c is uppercase else returns 0
 * @c: arguement
 * Return: 1 or 0
 */
int _isupper(int c)
{
	int c;

	if (c > 'a' && c < 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
