#include "lists.h"

/**
 * list_len - function that returns the number of elements
 * @h: head pointer
 * Return: int
 */
size_t list_len(const list_t *h)
{
	unsigned int count;

	while (h != NULL)
	{
		if (h->str == NULL)
			count++;
		else
		{
			count++;
			h = h->next;
		}
	}
	return (count);
}
