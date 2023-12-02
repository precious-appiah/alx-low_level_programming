#include "hash_tables.h"
/**
 * hash_table_get - function to get value
 * @ht: table
 * @key: key to check
 * Return: value matching key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int i;
	char *node;

	for (i = 0; i < ht->size; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			node = (ht->array[i]->value);
		}
	}
	return (node);
}
