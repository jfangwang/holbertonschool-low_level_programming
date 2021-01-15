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
	unsigned long int index;
	hash_node_t *find, *temp;

	if (ht == NULL)
		return;
	for (index = 0; index < ht->size; index++)
	{
		if (ht->array[index] != NULL)
		{
			for (find = ht->array[index]; find != NULL; find = find->next)
			{
				free(find->key);
				free(find->value);
				temp = find;
				find = find->next;
				free(temp);
			}
		}
	}
	free(ht->array);
	free(ht);
}
