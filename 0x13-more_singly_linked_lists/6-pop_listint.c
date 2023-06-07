#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - function that deletes the head node
 * @head: first parameter
 * Return:int
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int i;

	if (*head == NULL)
		return (0);

	temp = *head;
	*head = (*head)->next;
	i = (*head)->n;
	free(temp);

	return (i);
}
