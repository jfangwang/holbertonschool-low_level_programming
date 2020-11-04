#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
*pop_listint - Write a function that deletes the head node of a listint_t linked list, and returns the head node’s data (n).
*@head: a variable
*Return: 0
**/

int pop_listint(listint_t **head)
{
	listint_t *tempNode;
	int tempVal;

	if (*head == NULL)
		return (0);
	tempNode = *head;
	tempVal = tempNode->n;
	*head = tempNode->next;
	free(tempNode);
	return(tempVal);

}
