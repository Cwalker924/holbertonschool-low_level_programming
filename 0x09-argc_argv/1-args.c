#include <stdio.h>

/**
 * main - prints how many arguemnts passed to program
 * @argc: holds number of argurments
 * @argv: holds arguments in an string array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	argv--;
	i = 0;
	while (i < argc)
	{
		i++;
	}
	printf("%d\n", i - 1);
	return (0);
}
