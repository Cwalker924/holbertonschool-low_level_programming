#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - is a program that performs simple mathimatical operations
 * @argc: number of input passed to function
 * @argv: actual input passed in array form
 * Return: int
 */
int main(int argc, char *argv[])
{
	int a, b;
	int (*o)(int, int);

	if (argc != 4)
	{
		printf("ERROR");
		exit(98);
	}

	if (argv[2][1] != '\0')
	{
		printf("ERROR\n");
		exit(99);
	}

	o = get_op_func(argv[2]);

	if (o == NULL)
	{
		printf("ERROR\n");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	printf("%d\n", o(a, b));
	return (0);
}
