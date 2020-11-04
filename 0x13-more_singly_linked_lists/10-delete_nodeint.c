#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
*delete_nodeint_at_index - Write a function that
*deletes the node at index index of a listint_t linked list.
*@head: a variable
*@index: a variable
*Return: 0
**/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	if (*head == NULL || head == NULL)
		return (-1);

	listint_t *cur, *tmp;
	unsigned int count = 0;

	cur = *head;
	for (count = 0; count < index - 1; count++)
	{
		if (cur->next == NULL)
			return (-1);
		cur = cur->next;
	}
	tmp = cur->next;
	cur->next = tmp->next;
	free(tmp);
	return (1);

}
