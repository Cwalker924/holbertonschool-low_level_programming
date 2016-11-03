#include "holberton.h"

/**
 * _strlen_recursion - counts sting length
 * @s: variable pointer to a string
 * Return: int string length
 */
int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
