#include "holberton.h"
/**
 * jack_bauer - returns every minute of the day for JB
 */
void jack_bauer(void)
{
	int n1, n2, a, b, c, d;

	for (n1 = 00 ; n1 <= 23 ; n1++)
	{
		for (n2 = 00 ; n2 <= 59 ; n2++)
		{
			a = (n1 % 1);
			b = (n1 / 1);
			c = (n2 % 1);
			d = (n2 / 1);
			if (n1 == 23 && n2 == 59)
			{
				break;
			}
			else
			{
				_putchar(a + '0');
				_putchar(b + '0');
				_putchar(':');
				_putchar(c + '0');
				_putchar(d + '0');
				_putchar('\n');
			}
		}
	}
}
