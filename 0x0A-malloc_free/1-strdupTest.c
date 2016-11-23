#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

int str_len(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}


char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

char *_strdup(char *str)
{
	char *c;
	int i;

	if (str == NULL)
		return (NULL);

	c = malloc(str_len(str) + 1);

	if (c == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		c[i] = str[i];

	return (c);
}
