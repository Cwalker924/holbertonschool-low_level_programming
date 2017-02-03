#include "hash_tables.h"

/**
 * hash_table_print - prints hash table
 * @ht: pointer to hash table
 *
 * credit: Philip Yoo "https://github.com/philipyoo/holbertonschool-
 * low_level_programming/blob/master/0x19-hash_tables/5-hash_table_print.c"
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp;
	unsigned long int count;
	int delim;

	printf("{");

	count = 0;
	delim = 0;
	while (count < ht->size)
	{
		temp = ht->array[count];
		if (temp)
		{
			if (delim == 1)
				printf(", ");
			printf("'%s': '%s'", temp->key, temp->value);
			delim = 1;
		}
		count++;
	}
	printf("}\n");
}
