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
 * _strncat - concatenates two strings
 * @dest: destination variable pointer
 * @src: source variable pointer
 * @n: number of bytes wanted from src
 * Return: concatenated strings
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;
	while (j != n && src[j] != '\0')
	{
		dest[i++] = src[j++];
	}
	dest[i] = '\0';
	return (dest);
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
	int i, n;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	c = malloc(str_len(s1) + str_len(s2) + 1);

	n = 0;
	while (s1[n] != '\0')
	{
		n++;
	}
	_strncat(c, s1, n);

	i = 0;
	while (s2[i] != '\0')
	{
		i++;
	}
	_strncat(c, s2, i);
	return (c);
}
