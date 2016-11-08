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
	int i, n, sum;

	n = sum = 0;
	i = 1;
	if (argc <= 1)
	{
		printf("0\n");
		return (0);
	}
	while (i < argc)
	{
		while (*argv[i] != '\0')
		{
			if (*argv[i] >= '0' && *argv[i] <= '9')
			{
				n = n * 10 + *argv[i] - '0';
			}
			else
			{
				printf("Error\n");
				return (1);
			}
			argv[i]++;
		}
		sum = sum + n;
		n = 0;
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
