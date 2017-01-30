#include "monty.h"

/**
 *
 *
 *
 */
void pop(stack_t **stack, unsigned int line_number)
{
	if (del_top_node(stack) == 1)
	{
		printf("L%d: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
}
