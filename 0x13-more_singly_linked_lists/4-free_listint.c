#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - function to free list
 * @head: first parameter
 * Return:Nothing
 */
void free_listint(listint_t *head)
{
	free_listint(head->next);
	if (head->n)
		free(head->n);
	free(head);
}
