#include "holberton.h"
/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: variable pointer string to be read
 * @accept: variable pointer for instances to be located
 * Return: char
 */
char *_strpbrk(char *s, char *accept)
{
	int x, y;

	x = 0;
	while (s[x] != '\0')
	{
		y = 0;
		while (accept[y] != '\0')
		{
			if (s[x] == accept[y])
			{
				return (s + x);
			}
			y++;
		}
		x++;
	}
	return ('\0');
}
