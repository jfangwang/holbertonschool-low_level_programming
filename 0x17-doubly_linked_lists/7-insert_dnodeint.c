#include "lists.h"
/**
*create - creates a new node
*@prev: prev node
*@next: next node
*@a: value
*/
dlistint_t *create(dlistint_t *prev, dlistint_t *next, unsigned int a)
{
	dlistint_t *node;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return NULL;
	node->next = next;
	node->prev = prev;
	node->n = a;
	if (prev->next != NULL)
		prev->next = node;
	return (node);
}
/**
 **insert_dnodeint_at_index - Write a function
 *that inserts a new node at a given position.
 *@h: a variable
 *@idx: a variable
 *@n: a value
 *Return: 0
 **/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *cur, *new;
	unsigned int count = 0;

	if (h == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	/* iterate through the list */
	cur = *h;
	for (count = 0; count < idx; count++)
	{
		/*the linked list could be < idx*/
		if (cur == NULL)
			return (NULL);
		cur = cur->next;
	}
	new = create(cur, cur->next, n);
	cur->prev = new;
	cur->prev->prev->next = new;
	return (new);
}
