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
 * _strcpy - redirects memory
 * @dest: destination
 * @src: source
 * Return: new destination
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
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

	if (str == NULL)
	{
		return (NULL);
	}

	c = malloc(str_len(str) + 1);

	if (c == NULL)
	{
		return (NULL);
	}
	_strcpy(c, str);
	return (c);
}
