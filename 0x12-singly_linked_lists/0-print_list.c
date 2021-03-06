#include "lists.h"
/**
*print_list - Write a function that prints all the elements of a list_t list.
*@h: a variable
*Return: 0
**/

size_t print_list(const list_t *h)
{
	/*Willy is a fun count variable*/
	size_t willy = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		willy++;
		h = h->next;
	}
	return (willy);
}
