#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 **insert_nodeint_at_index - Write a function that returns
 *the nth node of a listint_t linked list.
 *@head: a variable
 *@idx: a variable
 *@n: a variable
 *Return: 0
 **/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *cur, *willy;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);

	willy = malloc(sizeof(listint_t));

	if (willy == NULL)
		return (NULL);
	/* Willy stores the requested node */
	willy->n = n;
	willy->next = NULL;
	if (idx == 0)
	{
		cur->next = *head;
		*head = willy;
		return (head);
	}
	/* iterate through the list */
	cur = *head;
	for (count = 0; count <= idx - 1; count++)
	{
		/*the linked list could be < idx*/
		if (cur == NULL)
			return (NULL);
		cur = cur->next;
	}
	willy->next = cur->next;
	cur->next = willy;
	return (willy);
}
