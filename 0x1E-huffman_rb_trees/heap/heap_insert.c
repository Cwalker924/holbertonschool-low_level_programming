#include "heap.h"
/**
 * Code Credit:
 * GitHub-@jayjay823
 */

/**
 * find_parent - gets parent node
 * @root: binary tree root
 * @height: tree height
 * Return: parent node
 */
binary_tree_node_t *find_parent(binary_tree_node_t *root, int *height)
{
	binary_tree_node_t *left, *right;
	int left_height, right_height;

	height++;
	if (root->left == NULL || root->right == NULL)
		return (root);
	left_height = right_height = 0;
	left = find_parent(root->left, &left_height);
	right = find_parent(root->right, &right_height);
	if (left_height == right_height)
	{
		height += right_height;
		return (left);
	}
	else if (left_height > right_height)
	{
		height += left_height;
		return (right);
	}
	return (NULL);
}

/**
 * swap_nodes - swap data in nodes
 * @new_node: newly added node
 * @parent: parent node
 * Return: 0 upon success
 */
int swap_nodes(binary_tree_node_t *new_node, binary_tree_node_t *parent)
{
	void *temp;

	temp = new_node->data;
	new_node->data = parent->data;
	parent->data = temp;
	return (0);
}

/**
 * heap_insert - inserts node into heap
 * @heap: pointer to heap
 * @data: data to insert into node
 * Return: newly created node
 */
binary_tree_node_t *heap_insert(heap_t *heap, void *data)
{
	binary_tree_node_t *add_node, *parent, *temp;
	int height;

	height = 0;
	add_node = binary_tree_node(NULL, data);
	if (add_node == NULL)
		return (NULL);
	if (heap->root == NULL)
	{
		heap->size++;
		heap->root = add_node;
		return (add_node);
	}
	parent = find_parent(heap->root, &height);
	add_node->parent = parent;
	if (parent->left == NULL)
		parent->left = add_node;
	else
		parent->right = add_node;
	temp = add_node;
	while (temp->parent != NULL)
	{
		if (heap->data_cmp(temp->data, temp->parent->data) < 0)
		{
			swap_nodes(temp, temp->parent);
			add_node = temp->parent;
		}
		temp = temp->parent;
	}
	if (add_node->parent == NULL)
	{
		heap->root = add_node;
	}
	heap->size++;
	return (add_node);
}
