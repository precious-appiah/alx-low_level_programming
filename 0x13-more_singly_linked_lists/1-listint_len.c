#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - function that prints length
 * @h: head pointer
 * Return:size
 */
size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
