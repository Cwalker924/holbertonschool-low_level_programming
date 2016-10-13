#include <stdio.h>
/**
 * C Program for byte size
 */

/**
 * main - for program entry point
 * prints a byte menue
 * Return: 0 for program exit
 *
 */
int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;

	printf("Size of a char: %ul byte(s)", (unsigned long)sizeof(c));
	printf("Size of an int: %ul byte(s)", (unsigned long)sizeof(i));
	printf("Size of a long int: %ul byte(s)", (unsigned long)sizeof(li));
	printf("Size of a long long int: %ul byte(s)", (unsigned long)sizeof(lli));
	printf("Size of a float: %ul byte(s)\n", (unsigned long)sizeof(f));

	return (0);
}
