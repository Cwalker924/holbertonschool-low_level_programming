#include "holberton.h"
/**
 * _strstr - a function that locates a substring
 * @haystack: pointer variable that holds a string
 * @needle: pointer variable that holds a string to be searched for
 * Return: located word in haystack or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int h, n, s;

	h = 0;
	while (haystack[h] != '\0')
	{
		n = 0;
		s = h;
		while (needle[n] != '\0' && haystack[h] != '\0' &&
		       haystack[h] == needle[n])
		{
			h++;
			n++;
		}
		if (needle[n] == '\0')
		{
			return (haystack + s);
		}
		h = s + 1;
	}
	return ('\0');
}
