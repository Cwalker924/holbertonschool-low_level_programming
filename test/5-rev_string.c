#include "holberton.h"

/**
 * str_len - gets the length of a string
 * @s: pointer variable
 * Return: length
 */
int str_len(char *s)
{
	int x;

	x = 0;
	while (s[x] != '\0')
	{
		x++;
	}
	x--;
	return (x);
}

/**
 * rev_string - reverses a string
 * @s: pointer variable
 */
void rev_string(char *s)
{
	int length, x;
	char first, last;

	length = str_len(s);
	x = 0;
	while (x < length)
	{
		first = s[x];
		last = s[length];
		s[x++] = last;
		s[length--] = first;
	}
}
