#include "lists.h"
/**
*free_list - Write a function that frees a list_t list.
*@head: a variable
*Return: 0
**/
void free_list(list_t *head)
{
	list_t *willy = head;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		willy = head;
		head = head->next;
		free(willy->str);
		free(willy);
	}
	free(head);
}
