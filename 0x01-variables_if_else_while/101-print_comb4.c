#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	int n, num, numnum;

	for (n = '0' ; n <= '9' ; n++)
	{
		for (num = '1' ; num <= '9' ; num++)
		{
			for (numnum = '2' ; numnum <= '9' ; numnum++)
			{
				if (n < num && num < numnum)
				{
					putchar(n);
					putchar(num);
					putchar(numnum);
					if (n == '7' && num == '8' && numnum == '9')
					{
						break;
					}
					else
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
