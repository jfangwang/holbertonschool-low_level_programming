#include "lists.h"
/**
 **get_dnodeint_at_index - Write a function that returns the
 *nth node of a dlistint_t linked list.
 *@head: a variable
 *@int index: a variable
 *Return: 0
 **/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count;

	for (count = 0; head != NULL; count++)
	{
		if (count == index)
			return (head);
		head = head->next;
	}
	return (NULL);
}
