#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint- to add new node at beginning
 * @head: head parameter
 * @n:number to be added
 * Return: address of new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
