#include "lists.h"
/**
 *sum_dlistint - Write a function that returns the
 *sum of all the data (n) of a dlistint_t linked list.
 *@head: a variable
 *Return: 0
 **/

int sum_dlistint(dlistint_t *head)
{
	unsigned int count = 0;
	int sum = 0;

	if (head == NULL)
		return (0);
	for (count = 0; head != NULL; count++)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
