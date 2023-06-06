#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end- function to add node at the end
 * @head: first node head
 * @n: node param
 * Return: address
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp;
	listint_t *new_node;

	if(head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return NULL;
	new_node->n = n;
	new_node->next = NULL;

	if(*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	temp = *head;

	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new_node;

	return (new_node);
}
