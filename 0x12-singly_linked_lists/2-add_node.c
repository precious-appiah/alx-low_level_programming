#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node- function to add new node
 * @head: head node
 * @str: string to be used for new node
 * Return: pointer
 */
list_t *add_node(list_t **head, const char *str)
{
	int i = 0;

	char *dupstr = strd(*str);

	while (*(str + i) != '\0')
		i++;
	i++;

	char *dupstr = strd(*str);

	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = dupstr;
	new_node->len = i;
	new_node->next = NULL;

	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
