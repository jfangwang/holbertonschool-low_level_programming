#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include "hash_tables.h"
/**
 *hash_table_print - Write a function that prints a hash table.
 *@ht: a variable
 *Return: 0
 **/

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index, count;
	hash_node_t *find;

	if (ht == NULL)
		return;
	printf("{");
	count = 0;
	for (index = 0; index < ht->size; index++)
	{
		for (find = ht->array[index]; find != NULL; find = find->next)
		{
			if (count > 0)
				printf(", ");
			printf("'%s': '%s'", find->key, find->value);
			count += 1;
		}
	}
	printf("}\n");
}
