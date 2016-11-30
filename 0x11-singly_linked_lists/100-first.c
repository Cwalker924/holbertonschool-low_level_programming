#include <stdio.h>

void tortoiseAndHare(void) __attribute__ ((constructor));
/**
 * tortoiseAndHare - function that executes before main.
 */
void tortoiseAndHare(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
