#include "holberton.h"
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
