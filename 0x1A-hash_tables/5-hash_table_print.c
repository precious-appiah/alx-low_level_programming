#include "hash_tables.h"
/**
 * hash_table_print - function to print
 * @ht: table
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned int i;
	unsigned char flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (flag == 1)
				printf(", ");

			node = ht->array[i];
			while (node != NULL)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				if (node != NULL)
					printf(", ");
			}
			flag = 1;
		}
	}
		printf("}\n");
}
