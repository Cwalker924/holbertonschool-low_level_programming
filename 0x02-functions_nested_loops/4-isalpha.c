#include "holberton.h"
/**
 * _isalpha - checks if input is a letter
 * @c: check case
 * Return: 1 or 0
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
