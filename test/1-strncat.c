#include "holberton.h"
/**
 * _strncat - concatenates two strings
 * @dest: destination variable pointer
 * @src: source variable pointer
 * @n: number of bytes wanted from src
 * Return: concatenated strings
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;
	while (src[j] != '\0' && j != n)
	{
		dest[i++] = src[j++];
	}
	dest[i] = '\0';
	return (dest);
}
