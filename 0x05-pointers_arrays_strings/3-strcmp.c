#include "holberton.h"

/**
 * _strcmp - campares two strings
 * @s1: string 1
 * @s2: string 2
 * Return: string difference
 */
int _strcmp(char *s1, char *s2)
{
	int i, j;

	i = 0;
	while (s1[i] != '\0')
	{
		i++;
	}

	j = 0;
	while (s2[j] != '\0')
	{
		j++;
	}

	if (i < j)
	{
		return (-15);
	}
	else if (i > j)
	{
		return (15);
	}
	else
	{
		return (0);
	}
}
