#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	int n = '0';
	int num = '0';

	while (n <= '9')
	{
		while (num <= '9')
		{
			putchar(n);
			putchar(num);
			if (n == '9' && num == '9')
			{
				putchar('\n');
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
			num++;
		}
		if (num >= '9')
		{
			num = '0';
		}
		n++;
	}
	return (0);
}
