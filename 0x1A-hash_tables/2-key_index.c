#include "hash_tables.h"

/**
 * key_index - function that return index
 * @key: first param
 * @size: second param
 * Return: unsigned integer
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
