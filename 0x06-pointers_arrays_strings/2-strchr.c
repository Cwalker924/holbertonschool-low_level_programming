#include "holberton.h"

/**
 * _strchr - a function that locates a character in a string
 * @s: variable pointer
 * @c: letter to be located
 * Return: Char
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		if (*s == '\0')
		{
			return (0);
		}
		s++;
	}
	return (s);
}
