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
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: byte to go upto on s2
 * Return: s1 and s2 concatenated otherwise NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *c;
	int d;
	unsigned int p;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	c = malloc(str_len(s1) + str_len(s2) + 1);
	if (c == NULL)
	{
		return (NULL);
	}

	d = 0;
	while (s1[d] != '\0')
	{
		d++;
	}
	_strncat(c, s1, d);

	p = str_len(s2) + 1;
	if (p <= n)
	{
		_strncat(c, s2, p);
	}
	else
	{
		_strncat(c, s2, n);
	}
	return (c);
}
