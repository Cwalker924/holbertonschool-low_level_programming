#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _memset - copies the character b (an unsigned char) to the first n
 * characters of the string pointed to, by the argument str.
 * @s: pointer to string
 * @b: replacement character
 * @n: number of times to replace b variable
 * Return: (s)tring
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}

/**
 * create_array - creates a block of memory using
 * malloc and fills it with a character
 *
 * @size: array size
 * @c: character to put in array
 * Return: array otherise NULL
 */

char *create_array(unsigned int size, char c)
{
	char *p;

	if (size > 0)
	{
		p = malloc(sizeof(char) * size);
	}
	else
	{
		return (NULL);
	}

	_memset(p, c, size);
	return (p);
}
