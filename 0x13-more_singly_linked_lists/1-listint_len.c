#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 *listint_len - Write a function that returns the
 *number of elements in a linked listint_t list.
 *@h: a variable
 *Return: 0
 **/

size_t listint_len(const listint_t *h)
{
	int willy = 0;

	if (!h)
		return (0);
	while (h)
	{
		h = h->next;
		willy += 1;
	}
	return (willy);
}
