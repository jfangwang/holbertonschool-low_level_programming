#include "lists.h"
/**
 **add_node - Write a function that adds a
 *new node at the beginning of a list_t list.
 *@head: a variable
 *@str: a variable
 *Return: 0
 **/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tempwilly;
	list_t *endwilly = *head;
	int willy = 0;

	if (head == NULL)
		return (NULL);

	tempwilly = malloc(sizeof(list_t));

	if (tempwilly == NULL)
		return (NULL);

	tempwilly->str = strdup(str);

	if (tempwilly->str == NULL)
	{
		free(tempwilly);
		return (NULL);
	}

	while (str[willy] != '\0')
		willy++;

	tempwilly->len = willy;
	tempwilly->next = NULL;
	if (*head == NULL)
	{
		*head = tempwilly;
		return (tempwilly);
	}
	endwilly = *head;
	while (endwilly->next != NULL)
		endwilly = endwilly->next;
	endwilly->next = tempwilly;
	tempwilly->next = NULL;
	/* THE END of Willy */
	return (tempwilly);
}
