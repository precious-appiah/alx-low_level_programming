#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2- function to free pointers
 * @head: first param
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (*head == NULL)
		return (NULL);
	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
}
