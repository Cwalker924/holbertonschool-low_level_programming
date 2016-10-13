#include <stdlib.h>
#include <time.h>
/*
 * more headers goes there
 * C program to evaluate n
 */

/**
 * betty style doc for function main goes there
 * main - for entry point
 * prints the evaluation for n
 * Return: 0 to close main
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%d is %s\n", n, "positive");
	}
	else if (n == 0)
	{
		printf("%d is %s\n", n, "zero");
	}
	else
	{
		printf("%d is %s\n", n, "negative");
	}

	return (0);
}
