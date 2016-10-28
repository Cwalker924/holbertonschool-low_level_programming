#include "holberton.h"

/**
 * rot13 - codes string using rot13 code
 * @p: pointer variable
 * Return: coded string
 */
char *rot13(char *p)
{
	int i = 0;

	while (p[i] != '\0')
	{
		while ((p[i] >= 'a' && p[i] <= 'm') ||
		       (p[i] >= 'A' && p[i] <= 'M'))
		{
			if ((p[i] >= 'n' && p[i] <= 'z') ||
			    (p[i] >= 'N' && p[i] <= 'Z'))
			{
				p[i] -= 13;
			}
			else
			{
				p[i] += 13;
			}
			i++;
		}
		i++;
	}
	return (p);
}
