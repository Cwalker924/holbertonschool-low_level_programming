#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * float_ - prints floats
 * @lst: passes va_list
 */
void float_(va_list lst)
{
	printf("%f", va_arg(lst, double));
}

/**
 * integer_ - prints integers
 * @lst: passes va_list
 */
void integer_(va_list lst)
{
	printf("%d", va_arg(lst, int));
}

/**
 * string_ - prints strings
 * @lst: passes va_list
 */
void string_(va_list lst)
{
	char *s;

	s = va_arg(lst, char *);
	if (s == NULL)
		s = "(nil)";
	printf("%s", s);
}

/**
 * character_ -prints characters
 * @lst: passes va_list
 */
void character_(va_list lst)
{
	printf("%c", va_arg(lst, int));
}

/**
 * print_all - prints anything
 * @format: format of arguement
 */
void print_all(const char * const format, ...)
{
	unsigned int i, n;
	va_list args;
	char *sep;

	checker storage[] = {
		{ "f", float_ },
		{ "i", integer_ },
		{ "s", string_ },
		{ "c", character_ },
		{NULL, NULL}
	};

	i = 0;
	sep = "";
	va_start(args, format);

	while (format != NULL && format[i / 4] != '\0')
	{
		n = i % 4;
		if (storage[n].type_is[0] == format[i / 4])
		{
			printf("%s", sep);
			storage[n].f(args);
			sep = ", ";
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
