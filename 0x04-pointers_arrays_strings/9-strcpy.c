#include "holberton.h"

/**
 * _strcpy - redirects memory
 * @dest: destination
 * @src: source
 * Return: new destination
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	char *get;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	get = dest;
	return (get);
}
