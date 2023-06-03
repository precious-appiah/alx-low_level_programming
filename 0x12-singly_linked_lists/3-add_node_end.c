#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_node_end - function to add node to end of list
 * @head: first param
 * @str: sting passed
 * Return: pointer
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int i = 0;

	list_t *new_node, temp;

	if (str == NULL)
		return (NULL);

	while (*(str + i) != '\0')
		i++;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = i;
	new_node->next = NULL;	
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	temp = *head
	while (temp != NULL)
	{
		temp = temp->next;
	}
	temp->next = new_node;
	return (new_node);
}
