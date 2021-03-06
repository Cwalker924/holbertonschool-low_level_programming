#include "hash_tables.h"

/**
 * hash_table_set - adds an element to hash table
 * @ht: hash table to add or update
 * @key: key
 * @value: value associated with key
 * Return: 1 upon success otherwise 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node, *temp;
	unsigned long int idx;

	if (!ht)
		return (0);
	if (!key)
		return (0);

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);
	new_node->key = (char *)key;
	new_node->value = (char *)value;
	new_node->next = NULL;

	idx = key_index((const unsigned char *)key, ht->size);
	if (ht->array[idx])
	{
		temp = ht->array[idx];
		while (temp)
		{
			if (strcmp(temp->key, key) == 0)
			{
				temp->key = (char *)key;
				break;
			}
			temp = temp->next;
		}
		return (1);
	}

	if (ht->array[idx])
	{
		new_node->next = ht->array[idx];
	}
	ht->array[idx] = new_node;
	return (1);
}
