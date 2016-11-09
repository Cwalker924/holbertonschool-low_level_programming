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
	char *a, *retp;
	int i, j, size, strcount;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; *(*(av + i) + j) != '\0'; j++)
			size++;
		size++;
	}

	a = malloc((size + 1) * sizeof(char));

	if (a == NULL)
		return (NULL);

	strcount = 0;
	retp = a;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; *(*(av + i) + j) != '\0'; j++)
		{
			*(a + strcount) = *(*(av + i) + j);
			strcount++;
		}
		*(a + strcount) = '\n';
		strcount++;
	}
	*(a + strcount) = '\0';

	return (retp);
}
