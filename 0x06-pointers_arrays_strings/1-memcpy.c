#include "holberton.h"
/**
 * _memcpy - function that copies memory area
 * @dest: destination pointer variable
 * @src: source pointer variable
 * @n: number of bytes to be copied
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
