#include "holberton.h"
/**
 * jack_bauer - returns every minute of the day for JB
 *
 * Return: n/a
 */
void jack_bauer(void)
{
	int hrs, min;

	hrs = 0;
	while (hrs < 24)
	{
		min = 0;
		while (min < 60)
		{
			_putchar((hrs / 10) + '0');
			_putchar((hrs % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');
			min++;
		}
		hrs++;
	}
}
