#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that adds positive numbers
 * @argc: number of arguments
 * @argv: string array of arguemnts passed
 * Return: 0 if successful, 1 if Error
 */
int main(int argc, char *argv[])
{
	int i;
	long sum;

	for (i = 1, sum = 0; i < argc; i++)
	{
		if (*argv[i] == 0 || atoi(argv[i]) <= 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}

	printf("%ld\n", sum);
	return (0);
}
