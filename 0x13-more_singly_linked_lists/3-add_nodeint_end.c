#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
**add_nodeint_end - Write a function that adds a new node at the beginning of a listint_t list.
*@head: a variable
*@n: a variable
*Return: 0
**/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *willy;


	willy = malloc(sizeof(listint_t));
	if (!willy)
		return (NULL);

	willy->n = n;

	if (!*head)
	{
		willy->next = NULL;
		*head = willy;
		return (*head);
	}

	while (*head->next != NULL)
		*head = willysHead->next;
	
	*head->next = willy;

	return (willy);
}
