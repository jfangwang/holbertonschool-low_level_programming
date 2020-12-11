#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include "holberton.h"
/**
*print_dlistint - Write a function that prints all the elements of a dlistint_t list.
*@dlistint_t *h: a variable
*Return: 0
**/

size_t print_dlistint(const dlistint_t *h)
{
    int count = 0;

    while (h)
    {
        if (h->n)
        {
            printf("%d\n", h->n);
            count += 1;
            h = h->next;
        }
        else
        {
            printf("0\n");
            h = h->next;
        }
    }
    return (count);

}
