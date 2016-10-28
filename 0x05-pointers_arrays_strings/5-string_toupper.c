#include "holberton.h"
/**
 * string_toupper - puts string into uppercase
 * @p: variable pointer
 * Return: the uppercase string
 */
char *string_toupper(char *p)
{
	int i = 0;

	while (p[i] != '\0')
	{
		if (p[i] >= 'a' && p[i] <= 'z')
		{
			p[i] -= 32;
		}
		i++;
	}
	return (p);
}
