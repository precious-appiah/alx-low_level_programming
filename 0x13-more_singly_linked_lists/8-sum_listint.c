#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - funtion to sum list
 * @head: parameter given
 * Return: integer
 */
int sum_listint(listint_t *head)
{
	int i = 0;

	while (head != NULL)
	{
		i += head->n;
		head = head->next;
	}
	return (i);
}
