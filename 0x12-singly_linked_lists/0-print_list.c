#include <stdio.h>
#include "lists.h"
#include <stdio.h>

/**
 * print_list- function to print members
 * @h: pointer to node
 * Return:unsigned int
 */

size_t print_list(const list_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		count++;
		h = h->next;
	}
	return (count);
}
