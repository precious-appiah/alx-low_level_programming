#include "hash_tables.h"

/**
 * hash_table_delete - function to delete hash table
 * @ht : hash table to be deleted
 * Return : None
 */
void hash_table_delete(hash_table_t *ht)
{
	int i;
	hash_node_t *node, temp;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];

		while (node != NULL)
		{
			temp = node;
			node = node->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}

	free(ht->array);
	free(ht);
}
