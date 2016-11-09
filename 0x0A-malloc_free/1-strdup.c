#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_len - counts how many characters in a string
 * @str: string to count
 * Return: returns number of characters
 */
int str_len(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * _strdup - returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a
 * parameter.
 *
 * @str: variable string
 * Return: string otherwise NULL
 */
char *_strdup(char *str)
{
	char *c;
	int size;
	int i;

	size = str_len(str);
	c = malloc((size + 1) * sizeof(char));

	if (c == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (i < size)
	{
		c[i] = str[i];
		i++;
	}
	return (c);
}
