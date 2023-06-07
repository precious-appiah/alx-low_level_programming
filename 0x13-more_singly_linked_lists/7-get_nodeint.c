#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index- function that returns the nth node
 * @head: first param
 * @index:second param
 * Return: node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	int i = 0;
	int *find_node = head;

	while (find_node != NULL)
	{
		if (i == index)
			return (find_node);
		find_node = find_node->next;
		i++;
	}
}
