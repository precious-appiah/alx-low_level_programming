#include "hash_tables.h"
/**
 * hash_table_print - function to print
 * @ht: table
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned int i;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			printf("{%s, %s}", node->key, node->value);
			node = node->next;
		}
	}
}
