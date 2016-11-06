#include <stdio.h>

/**
 * main - prints all arguements recived
 * @argc: holds number of argurments
 * @argv: holds arguments in an string array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
