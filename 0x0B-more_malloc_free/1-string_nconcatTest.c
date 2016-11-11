#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *c;
	unsigned int a, b, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (a = 0; s1[a] != '\0'; a++)
		;
	for (b = 0; s2[b] != '\0'; b++)
		;

	i = 0;
	if (n >= b)
	{
		i = a + b;
	}
	else
	{
		i = a + n;
	}

	c = malloc((i + 1) * sizeof(*c));

	if (c == NULL)
	{
		return (NULL);
	}

	for (a = 0; s1[a] != '\0'; a++)
	{
		c[a] = s1[a];
	}
	for (b = 0; a < i && s2[b] != '\0'; b++, a++)
	{
		c[a] = s2[b];
	}
	c[a] = '\0';
	return (c);
}
