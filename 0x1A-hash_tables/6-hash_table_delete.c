#include "hash_tables.h"

/**
 * hash_table_delete - function to delete hash table
 * @ht : hash table to be deleted
 * Return : None
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node, *temp;
	hash_table_t *head = ht;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			node = ht->array[i];

			while (node != NULL)
			{
				temp = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = temp;
			}
		}
	}

	free(head->array);
	free(head);
}
