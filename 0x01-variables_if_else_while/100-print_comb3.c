#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	int n, num;

	for (n = '0' ; n <= '9' ; n++)
	{
		for (num = '1' ; num <= '9' ; num++)
		{
			if (n < num)
			{
				putchar(n);
				putchar(num);
				if (n == '8' && num == '9')
				{
					putchar('\n');
				}
				else
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
