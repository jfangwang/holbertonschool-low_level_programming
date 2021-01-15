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
	hash_node_t *temp;

	if (ht == NULL)
		return;
	for (index = 0; index < ht->size; index++)
	{
		if (ht->array[index])
		{
			while (ht->array[index] != NULL)
			{
				temp = ht->array[index];
				ht->array[index] = ht->array[index]->next;
				free(temp->key);
				free(temp->value);
				free(temp);
			}
		}
	}
	free(ht->array);
	free(ht);
}
