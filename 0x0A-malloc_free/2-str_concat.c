#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_len - counts how many characters in a string
 * @str: sting to count
 * Return: number of characters in string
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
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: s1 and s2 concatenated otherwise NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *c;
	int i;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	c = malloc(sizeof(*s1) + sizeof(*s2));

	i = 0;
	while (*s1 != '\0')
	{
		c[i] = *s1;
		s1++;
		i++;
	}
	while (*s2 != '\0')
	{
		c[i] = *s2;
		s2++;
		i++;
	}
	return (c);
	free(c);
}
