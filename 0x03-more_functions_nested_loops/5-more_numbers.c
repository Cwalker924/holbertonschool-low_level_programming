#include "holberton.h"
/**
 * more_numbers - prints 0-14 x14
 */
void more_numbers(void)
{
	int n = 0;
	int num = 0;

	while (n <= 10)
	{
		num = 0;
		while (num <= 14)
		{
			if (num >= 10)
			{
				_putchar(num / 10 + '0');
			}
			_putchar(num % 10 + '0');
			num++;
		}
		n++;
		_putchar('\n');
	}
	_putchar('\n');
}
