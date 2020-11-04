#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 **get_nodeint_at_index - Write a function that
 *@head: a variable
 *@index: a variable
 *Return: 0
 **/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;

	for (count = 0; head != NULL; count++)
	{
		if (count == index)
			return (head);
		head = head->next;
	}
	return (NULL);
}
