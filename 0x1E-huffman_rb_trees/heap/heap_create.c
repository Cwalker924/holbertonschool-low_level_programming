#include "heap.h"

/**
 * heap_create - Creates a heap data structure
 * @data_cmp: data comparing function
 * Return: new heap or NULL on failure
 */
heap_t *heap_create(int (*data_cmp)(void *, void *))
{
	heap_t *add_node;

	add_node = malloc(sizeof(heap_t));
	if (add_node == NULL)
		return (NULL);
	add_node->root = NULL;
	add_node->size = 0;
	add_node->data_cmp = data_cmp;

	return (add_node);
}
