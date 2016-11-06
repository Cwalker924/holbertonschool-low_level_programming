#include "holberton.h"
/**
 * _isdigit - returns if input is a 1 digit number
 * @c: argument
 * Return: returns 0 or 1
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
