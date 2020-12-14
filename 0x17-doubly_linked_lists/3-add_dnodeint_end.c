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
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		bighead = *head;
		while (bighead->next != NULL)
			bighead = bighead->next;
		bighead->next = new;
		new->prev = bighead;
	}
	return (new);
}
