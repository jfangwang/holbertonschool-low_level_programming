#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include "hash_tables.h"
/**
* hash_table_create - Write a function that creates a hash table.
*@size: a variable
*Return: 0
**/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int a;

	table = (hash_table_t *) malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);
	table->size = size;
	if (size == 0)
		return (NULL);
	table->array = malloc(sizeof(hash_table_t *) * size);
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}
	for (a = 0; a < size; a++)
		table->array[a] = NULL;
	return (table);
}
