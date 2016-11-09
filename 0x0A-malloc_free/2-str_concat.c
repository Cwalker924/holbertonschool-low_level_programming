#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *
 *
 *
 */
int str_len(char *str)
{
	int i = 0;

	while (str != '\0')
	{
		i++;
	}
	return (i);
}



char *str_concat(char *s1, char *s2)
{
	char *c;
	int i;

	c = malloc(sizeof(*s1) + sizeof(*s2));

	if (c == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (*s1 != '\0')
	{
		c[i] = *s1;
		s1++;
		i++;
	}
	while(*s2 != '\0')
	{
		c[i] = *s2;
		s2++;
		i++;
	}
	c[i] = '\0';
	return (c);
}
