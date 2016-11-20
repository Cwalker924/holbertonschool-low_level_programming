#ifndef HEADER
#define HEADER
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

typedef struct format
{
	char c;
	int i;
	float f;
	char *s;
} format;
#endif
