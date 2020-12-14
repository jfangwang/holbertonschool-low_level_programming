#include "lists.h"
/**
*free_dlistint - Write a function that frees a dlistint_t list.
*@head: a variable
*Return: 0
**/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *willy = head;

        if (head == NULL)
                return;
        while (head != NULL)
        {
                willy = head;
                head = head->next;
                free(willy);
        }
        free(head);
}
