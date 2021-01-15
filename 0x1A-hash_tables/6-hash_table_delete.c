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
	hash_node_t *find, *temp;

	if (ht == NULL)
		return;
	for (index = 0; index < ht->size; index++)
	{
		if (ht->array[index])
		{
			while (find != NULL)
			{
				temp = find;
				find = find->next;
				free(temp);
				free(find->key);
				free(find->value);
			}
		}
	}
	free(ht->array);
	free(ht);
}
