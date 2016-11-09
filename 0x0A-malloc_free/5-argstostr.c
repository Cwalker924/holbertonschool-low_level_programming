#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: int input
 * @av: char input
 * Return: character with new line after each (av) otherise NULL
 */
char *argstostr(int ac, char **av)
{
	char *c, *temp;
	int i, j;

	c = malloc(ac * sizeof(char *));
	temp = c;
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			*c = av[i][j];
			j++;
			c++;
		}
		*c = '\n';
		c++;
	}
	if (temp)
		return (temp);
	else
		return (NULL);
}
