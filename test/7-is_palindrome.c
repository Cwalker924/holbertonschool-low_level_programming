#include "holberton.h"

/**
 * str_len - finds length of string
 * @s: variable pointer to string
 * Return: (s)tring length
 */
int str_len(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + str_len(s + 1));
}

/**
 * match - matches characters of a single string
 * @s: pointer variable to a (s)tring
 * @l: end of (s)tring
 * @i: index position in (s)tring
 * Return: 0 if characters match and 1 if they are not
 */
int match(char *s, int l, int i)
{
	if (i >= ((l + 1) / 2))
	{
		return (1);
	}
	if (*(s + i) != *(s + l - i))
	{
		return (0);
	}
	return (match(s, l, i + 1));
}

/**
 * is_palindrome - indicates a palindrome
 * @s: pointer variable to a string
 * Return: 1 if (s)tring is a palindrome and 0 if it is not
 */
int is_palindrome(char *s)
{
	int l;

	l = str_len(s);
	return (match(s, l - 1, 0));
}
