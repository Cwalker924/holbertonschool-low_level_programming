#include "heap.h"

/**
 * heap_delete - deletes a heap
 * @heap: pointer to heap
 * @free_data: pointer to function that free's node
 */
void heap_delete(heap_t *heap, void (*free_data)(void *))
{
	if (heap)
	{
		if (heap->root)
			tree_delete(heap->root, free_data);
		free(heap);
	}
}

/**
 * tree_delete - deletes tree
 * @root: root of the tree
 * @free_data: pointer to function to free
 */
void tree_delete(binary_tree_node_t *root, void (*free_data)(void *))
{
	if (!root)
		return;

	if (root->left)
		tree_delete(root->left, free_data);
	if (root->right)
		tree_delete(root->right, free_data);
	if (free_data)
		free_data(root);
	free(root);
}
