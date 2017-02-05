#include "hash_tables.h"

/**
 * hash_table_get - retrieces a value associated with key
 * @ht: hash table being searched
 * @key: key being searched
 * Return: the value associted with key or NULL if key doesnt exist
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *temp;
	unsigned long int idx;

	idx = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[idx];
	if (ht != NULL)
	{
		if (ht->array[idx])
		{
			while (temp)
			{
				if (strcmp(temp->key, (char *)key) == 0)
					return (temp->value);
				temp = temp->next;
			}
		}
	}
	return (NULL);
}
