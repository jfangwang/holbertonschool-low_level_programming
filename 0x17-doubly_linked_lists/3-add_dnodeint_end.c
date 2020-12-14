#include "lists.h"
/**
 **add_dnodeint_end - Write a function that adds a new node at the
 *end of a dlistint_t list.
 *@head: a variable
 *@n: a variable
 *Return: 0
 **/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *bighead;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	if (*head == NULL)
	{
		new->next = *head;
		new->prev = NULL;
		*head = new;
		return (*head);
	}
	bighead = *head;
	new->n = n;
	while (bighead->next != NULL)
		bighead = bighead->next;
	new->next = NULL;
	new->prev = bighead;
	bighead->next = new;
	return (new);
}
