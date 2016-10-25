#include "holberton.h"

/**
 * _strlen - returns the length of a pointer
 * @s: variable pointer
 * Return: total number of index
 */
int _strlen(char *s)
{
	int x;

	x = 0;
	while(s[x] != '\0')
	{
		x++;
	}
	return (x);
}
