#include "holberton.h"
/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: pointer variable to a string
 * @accept: letter(s) to be located
 * Return: the number of "accepted" located
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	i = 0;
	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (accept[j] == s[i])
			{
				break;
			}
			j++;
		}
		if (!accept[j])
		{
			break;
		}
		i++;
	}
	return (i);
}
