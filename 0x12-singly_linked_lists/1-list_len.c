#include "lists.h"
/**
*list_len - Write a function that returns the
*number of elements in a linked list_t list.
*@h: a variable
*Return: 0
**/

size_t list_len(const list_t *h)
{
	size_t willy = 0;

	if (h == NULL)
		return (willy);
	willy++;
	while (h->next != NULL)
	{
		willy++;
		h = h->next;
	}
	return (willy);
}
