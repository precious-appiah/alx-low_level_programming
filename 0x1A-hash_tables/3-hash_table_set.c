#include "hash_tables.h"
/**
 * hash_table_set - function to insert node
 * @ht: hash table
 * @key: key
 * @value: value to be inserted
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node, *current_node;
	unsigned int i, next_i;

	if (ht == NULL || key == NULL || *key == NULL)
		return (0);

	i = key_index(key, ht->size);

	new_node = malloc(sizeof(hash_node_t));

	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);

	new_node->value = strdup(value);

	new_node->next = ht->array[i];
	ht->array[i] = new_node;

	return (1);
}
