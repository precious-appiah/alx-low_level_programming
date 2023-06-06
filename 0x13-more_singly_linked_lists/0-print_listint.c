#include "lists.h"
#include <stdio.h>

/**
 * print_listint- function that prints all the elements
 * @h: first param head pointer
 * Return: size an int
 */

size_t print_listint(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		i++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (i);
}
