#include "holberton.h"

/**
 * spaces - accounts for all delimiters of spaces
 * @c: input variable
 * Return: 1 if contains delimiters && 0 if it does NOT
 */
int spaces(char c)
{
	if (c == ' ' || c == '\t' || c == '\n' || c == ',' ||
	    c == ';' || c == ';' || c == '.' || c == '!' ||
	    c == '?' || c == '"' || c == '(' || c == ')' ||
	    c == '{' || c == '}')
	{
		return (1);
	}
	return (0);
}

/**
 * cap_string - capitalized each word in a string
 * @p: string variable pointer
 * Return: string with all uppercase words
 */
char *cap_string(char *p)
{
	int i = 0;

	if (p[i] >= 'a' && p[i] <= 'z')
	{
		p[i] -= 32;
	}
	while (p[i] != '\0')
	{
		if (spaces(p[i]) == 1 && (p[i + 1] >= 'a' &&
					  p[i + 1] <= 'z'))
		{
			p[i + 1] -= 32;
			i++;
		}
		else
		{
			i++;
		}
	}
	return (p);
}
