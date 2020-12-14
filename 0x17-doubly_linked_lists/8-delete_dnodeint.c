#include "lists.h"
/**
 *delete_dnodeint_at_index - Write a function that deletes the node at index
 *index of a dlistint_t linked list.
 *@head: a variable
 *@index: a variable
 *Return: 0
 **/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *cur, *behind;
	unsigned int len = 0;

	if (*head == NULL)
		return (-1);
	cur = *head;
	while (len < index)
	{
		if (cur == NULL)
			return (-1);
		cur = cur->next;
		len++;
	}
	behind = cur->prev;
	if (index == 0)
	{
		if (cur->next != NULL)
		{
			*head = cur->next;
			cur->next->prev = NULL;
			return (1);
		}
		else
		{
			free(cur);
			*head = NULL;
			return (1);
		}
	}
	else
		behind->next = cur->next;
	if (cur->next != NULL)
		cur->next->prev = behind;
	free(cur);
	return (1);
}
