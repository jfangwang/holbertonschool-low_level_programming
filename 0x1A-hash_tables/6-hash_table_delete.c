#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include "hash_tables.h"
/**
 *hash_table_delete - Write a function that deletes a hash table.
 *@ht: a variable
 *Return: 0
 **/

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index = 0;
	hash_node_t *temp, *find;

	if (ht == NULL)
		return;
	find = ht->array[index];
	for (index = 0; index < ht->size; index++)
	{
		if (find)
		{
			while (find != NULL)
			{
				temp = ht->array[index];
				find = find->next;
				free(temp->key);
				free(temp->value);
				free(temp);
			}
		}
	}
	free(find);
	free(ht->array);
	free(ht);
}
