#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	char *concat, *test1, *test2;

	concat = string_nconcat("Holberton ", "School !!!", 6);
	test1 = string_nconcat("", "", 6);
	test2 = string_nconcat("oh ", "hello", 4);
	printf("%s\n", test1);
	printf("%s\n", test2);
	printf("%s\n", concat);
	free(concat);
	return (0);
}
