#include "hash_tables.h"

/**
 * hash_table_set - function to insert node
 * @ht: hash table
 * @key: key
 * @value: value to be inserted
 * Return: integer
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	unsigned int i;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	if (strdup(value) == NULL)
		return (0);

	i = key_index((const unsigned char *)key, ht->size);

	new_node = malloc(sizeof(hash_node_t));

	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);

	new_node->value = strdup(value);

	new_node->next = ht->array[i];
	ht->array[i] = new_node;

	return (1);
}
