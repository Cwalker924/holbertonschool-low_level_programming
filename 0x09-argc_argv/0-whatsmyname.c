#include <stdio.h>

/**
 * main - prints programs name
 * @argc: number of items in argv
 * @argv: an array of strings
 * Return: 0
 */
int main(int argc, char *argv[])
{
	argc--;
	printf("%s\n", argv[0]);
	return (0);
}
