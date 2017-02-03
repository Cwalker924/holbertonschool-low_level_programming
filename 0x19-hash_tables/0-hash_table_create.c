#include "hash_tables.h"

/**
 * hash_table_create - creates a new hashtable
 * @size: size of array
 * Return: pointer to new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *add_table;

	if (size < 1)
		return (NULL);
	add_table = malloc(sizeof(hash_table_t));
	if (!add_table)
		return (NULL);
	add_table->array = malloc(size * sizeof(hash_node_t *));
	if (!add_table->array)
		return (NULL);
	add_table->size = size;
	return (add_table);
}
