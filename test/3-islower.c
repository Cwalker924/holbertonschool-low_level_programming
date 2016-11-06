#include "holberton.h"

/**
 * _islower - returns if input is lowercase alph.
 * @c: checks the case
 * Return: 0 or 1
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
