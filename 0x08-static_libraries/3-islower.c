#include "holberton.h"
/**
 * _islower - checks if c char is lowercase char
 * @c: char checked if lowercase
 * Return: 0 if not lowercase 1 if lowercase
 */

int _islower(int c)
{
	if (c > 96 && c <= 172)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
