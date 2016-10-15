#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	int n, num, n1, n2, n3, n4;

	for (n = 0 ; n <= 98 ; n++)
	{
		for (num = 0 ; num <= 99 ; num++)
		{
			n1 = n / 10;
			n2 = n % 10;
			n3 = num / 10;
			n4 = num % 10;
			if (n < num)
			{
				putchar(n1 + '0');
				putchar(n2 + '0');
				putchar(' ');
				putchar(n3 + '0');
				putchar(n4 + '0');
				if (n != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
