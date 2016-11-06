#include "holberton.h"
/**
 * _strncpy - copy strings
 * @dest: destination variable pointer
 * @src: source variable pointer
 * @n: The number of characters to be copied from source
 * Return: returns copied destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i != n)
	{
		dest[i] = src[i];
		if (src[i] == '\0')
		{
			while (i != n)
			{
				dest[i++] = '\0';
			}
			break;
		}
		i++;
	}
	return (dest);
}
