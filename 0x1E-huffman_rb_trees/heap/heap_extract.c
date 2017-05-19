#include "heap.h"

/**
 * heap_extract - gets single node from heap
 * @heap: target heap
 * Return: data from node
 * Code Credit (GitHub - @jayjay823)
 */
void *heap_extract(heap_t *heap)
{
	binary_tree_node_t *root, *parent, *temp;
	void *data;

	if (!heap)
		return (NULL);
	root = heap->root;
	if (!root)
		return (NULL);
	data = root->data;
	parent = find_parent(root, 0);
	if (!parent->left && !parent->right)
		parent = parent->parent;
	if (parent->right)
	{
		swap_nodes(parent->right, root);
		temp = parent->right;
		parent->right = NULL;
	}
	else if (parent->left)
	{
		swap_nodes(parent->left, root);
		temp = parent->left;
		parent->left = NULL;
	}
	free(temp);
	root_node(root, heap);
	heap->size--;
	return (data);
}

/**
 * root_node - checks that root node has min value
 * @root: root node of tree
 * @heap: heap pointer
 * Return: 0 for success, otherwise 1 upon failure
 * Code Credit (GitHub - @jayjay823)
 */
int root_node(binary_tree_node_t *root, heap_t *heap)
{
	int diff;

	if (!root)
		return (1);
	while (root->left || root->right)
	{
		if (root->left && root->right)
		{
			diff = heap->data_cmp(root->left->data, root->right->data);
			if (diff < 0)
			{
				swap_nodes(root->left, root);
				root = root->left;
			}
			else
			{
				swap_nodes(root->right, root);
				root = root->right;
			}
		}
		else if (root->left)
		{
			swap_nodes(root->left, root);
			root = root->left;
		}
	}
	return (0);
}
