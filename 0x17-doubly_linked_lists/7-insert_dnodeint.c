#include "lists.h"
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
	dlistint_t *cur, *willy;
	unsigned int count = 0;

	if (h == NULL)
		return (NULL);

	willy = malloc(sizeof(dlistint_t));

	if (willy == NULL)
		return (NULL);
	/* Willy stores the requested node */
	willy->n = n;
	willy->next = NULL;
	cur = *h;
	if (idx == 0)
	{
		willy->next = *h;
		*h = willy;
		willy->prev = NULL;
		cur->prev = willy;
		return (willy);
	}
	/* iterate through the list */
	cur = *h;
	for (count = 0; count < idx - 1; count++)
	{
		/*the linked list could be < idx*/
		if (cur == NULL)
			return (NULL);
		cur = cur->next;
	}
	willy->next = cur->next;
	cur->next = willy;
	willy->prev = cur->prev;
	return (willy);
}
