#include "monty.h"

/**
 *
 *
 *
 */
int add_node(stack_t **stack, int n)
{
	stack_t *newnode;

	newnode = malloc(sizeof(stack_t));
	if (newnode == NULL)
		return (1);

	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = *stack;

	if (*stack == NULL)
		*stack = newnode;
	else
		(*stack)->prev = newnode;
	*stack = newnode;
	return(0);
}

/**
 *
 *
 *
 */
void del_stack(stack_t **stack)
{
	stack_t *temp;

	while((*stack)->next != NULL)
	{
		temp = *stack;
		*stack = (*stack)->next;
		free(temp);
	}
	free(*stack);
}

/**
 *
 *
 *
 */
int del_top_node(stack_t **stack)
{
	stack_t *ret_node;

	if (*stack == NULL)
		return (1);

	ret_node = *stack;
	if (ret_node->next == NULL)
	{
		free(ret_node);
		*stack = NULL;
		return (0);
	}

	*stack = (*stack)->next;
	(*stack)->prev = NULL;

	free(ret_node);
	return (0);
}

/**
 *
 *
 *
 */
int print_stack(stack_t **stack)
{
	stack_t *temp;

	if (*stack == NULL)
	{
		return (1);
	}
	temp = *stack;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
	return (0);
}
