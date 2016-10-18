#include "holberton.h"
/**
 * _abs - returns the absolute value of arg
 * @c: check case
 * Return: absolute value
 */
int _abs(int c)
{
	if (c < 0)
	{
		return (c * -1);
	}
	else
	{
		return (c);
	}
}
