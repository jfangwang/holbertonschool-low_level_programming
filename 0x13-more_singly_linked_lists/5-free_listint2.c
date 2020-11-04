#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
*free_listint2 - Write a function that frees a listint_t list.
*@head: a variable
*Return: 0
**/

void free_listint2(listint_t **head)
{
	listint_t *willysHead;

        if (head == NULL)
                return;
        while (*head != NULL)
        {
                willysHead = *head;
                *head = willysHead->next;
                free(willysHead);
        }
}
