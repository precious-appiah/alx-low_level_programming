#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - function inserts at a given position
 * @head: first param
 * @idx: index
 * @n: int to be inserted
 * Return: pointer
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = *head;
	listint_t *new_node;
	int i = 0;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n;

	while (temp != NULL)
	{
		if (i == idx)
		{
			new_node = temp;
			temp = new_node->next;
		}
		temp = temp->next;
		i++;
	}
}
