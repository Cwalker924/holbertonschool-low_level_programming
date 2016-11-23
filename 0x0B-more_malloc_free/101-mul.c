#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

int mul(int argc, int *argv[])
{
	int i;

	i = 0;
	while (argc != 1 && argc < 2)
	{
		argv[i] *= argv[i];
		i++;
	}
	printf("%d", argv);
	return (0);
}
