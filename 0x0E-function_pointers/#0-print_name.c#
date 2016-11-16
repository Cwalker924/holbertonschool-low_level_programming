#include <stdio.h>

/**
 * print_name - prints name
 * @name: names passed
 * @f: prints name in a specified format
 */
void print_name(char *name, void (*f)(char *))
{
	void (*pn)(char *);

	pn = f;
	pn(name);
}
