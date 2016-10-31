#include "holberton.h"
#include <stdio.h>
/**
 * _strchr - a function that locates a character in a string
 * @s: variable pointer
 * @c: letter to be located
 * Return: Char
 */
char *_strchr(char *s, char c)
{
	while (s != '\0')
	{
		if (*s == c)
		{
			return ((char *) s);
		}
		s++;
	}
	return (s);
}
