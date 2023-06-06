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
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
