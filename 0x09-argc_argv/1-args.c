#include <stdio.h>

/**
 * main - prints how many arguemnts passed to program
 * @argc: holds number of argurments
 * @argv: holds arguments in an string array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	argv--;
	printf("%d\n", argc);
	return (0);
}
