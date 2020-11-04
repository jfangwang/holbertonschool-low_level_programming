#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 *print_listint - Write a function that prints
 *all the elements of a listint_t list.
 *@h: a variable
 *Return: 0
 **/
size_t print_listint(const listint_t *h)
{
	size_t willy = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		willy += 1;
	}
	return (willy);
}
