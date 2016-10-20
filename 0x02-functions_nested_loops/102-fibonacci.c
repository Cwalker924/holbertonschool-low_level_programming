#include "holberton.h"
#include <stdio.h>

/**
 * main - prints out the first 50 fibonacci nums
 * Return: 0
 */
int main(void)
{
	int count, first, second, fib;

	count = 0;
	first = 1;
	second = 2;
	fib = 3;
	printf("1 , 2, ");
	while (count < 47)
	{
		printf("%d, ", fib);
		first = second;
		second = fib;
		fib = first + second;
		count++;
	}
	printf("%d\n", fib);
}
