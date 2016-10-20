#include "holberton.h"
#inlcude < stdio.h >

/**
 * main - prints sum of all multiples of 3 and 5
 * Return: 0
 */
int main(void)
{
	int a, sum;

	a = 0;
	sum = 0;
	while (a <= 1024)
	{
		if (3 % a == 0)
		{
			sum += a;
		}
		if (5 % a == 0)
		{
			sum += a;
		}
		a++;
	}
	printf("%d\n", sum);
	return (0);
}
