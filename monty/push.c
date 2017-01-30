#include "monty.h"

/**
 *
 *
 *
 */
void push(stack_t **stack, unsigned int line_number)
{
	if (add_node(stack, data) == 1)
	{
		printf("L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
}
