#include "lists.h"
/**
 **add_dnodeint - Write a function that adds a new node at the beginning of a dlistint_t list.
 *@*head: a variable
 *@int n: a variable
 *Return: 0
 **/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    dlistint_t *new, *big_head;
    int willy = 0;

    if (head == NULL)
        return (NULL);
    big_head = *head;
    new = malloc(sizeof(dlistint_t));
    if (new == NULL)
        return (NULL);
    new->n = n;
    new->prev = NULL;
    new->next = *head;
    if (*head != NULL)
        big_head->prev = new;
    *head = new;
    return (new);
}
