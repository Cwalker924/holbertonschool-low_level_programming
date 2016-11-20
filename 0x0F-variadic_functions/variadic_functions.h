#ifndef HEADER
#define HEADER
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

void float_(va_list lst);
void integer_(va_list lst);
void string_(va_list lst);
void character_(va_list lst);

typedef struct checker
{
	char *type_is;
	void (*f)();
} checker;
#endif
