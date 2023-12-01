#include "hash_tables.h"
/**
 * hash_table_create - funct to create table
 * @size: size of array
 * Return: new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table = (hash_table_t *)malloc(sizeof(hash_table_t));

	if (new_table == NULL)
		return (NULL);

	new_table->size = size;

	new_table->array = (hash_node_t **)malloc(size * sizeof(hash_node_t));

	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}
	return (new_table);
}
