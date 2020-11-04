#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
*sum_listint - Write a function that returns the sum of all the data (n) of a listint_t linked list.
*@head: a variable
*Return: 0
**/

int sum_listint(listint_t *head)
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
