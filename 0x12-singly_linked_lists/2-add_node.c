#include "lists.h"
/**
**add_node - Write a function that adds a
*new node at the beginning of a list_t list.
*@head: a variable
*@str: a variable
*Return: 0
**/

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	int willy = 0;

	if (head == NULL)
		return (NULL);
	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	temp->str = strdup(str);
	while (str[willy])
		willy++;
	temp->len = willy;
	temp->next = *head;
	*head = temp;
	return (temp);
}
