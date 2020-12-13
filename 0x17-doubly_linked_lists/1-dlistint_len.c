#include "lists.h"
/**
*dlistint_len - Write a function that returns the number of elements in a linked dlistint_t list.
*@dlistint_t *h: a variable
*Return: 0
**/

size_t dlistint_len(const dlistint_t *h)
{
    size_t count = 0;

    if (!h)
        return (count);
    while (h != NULL)
    {
        count += 1;
        h = h->next;
    }
    return (count);
}
