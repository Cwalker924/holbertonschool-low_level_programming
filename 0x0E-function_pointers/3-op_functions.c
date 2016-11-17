#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - adds 2 numbers
 * @a: num 1
 * @b: num 2
 * Return: added num of a & b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts 2 numbers
 * @a: num 1
 * @b: num 2
 * Return: sub num of a & b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies 2 numbers
 * @a: num 1
 * @b: num 2
 * Return: mult num of a & b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides 2 numbers
 * @a: num 1
 * @b: num 2
 * Return: div num of a & b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("ERROR");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - gives the remainder of 2 numbers
 * @a: num 1
 * @b: num 2
 * Return: mod of a & b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("ERROR");
		exit(100);
	}
	return (a % b);
}
