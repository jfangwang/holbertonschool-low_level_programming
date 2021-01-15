#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include "hash_tables.h"
/**
 *hash_table_set - Write a function that adds an element to the hash table.
 *@ht: a variable *@key: a variable
 *@key: a variable
 *@value: a variable
 *Return: 0
 **/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *find, *new;

	if (key == NULL || ht == NULL || value == NULL || !(*key))
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	/**
	 * Replace Value if key exists already
	*/
	find = ht->array[index];
	while (find != NULL)
	{
		if (!strcmp(find->key, key))
		{
			free(find->value);
			find->value = strdup(value);
			if (find->value == NULL)
				return (0);
			return (1);
		}
		find = find->next;
	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->key = strdup(key);
	new->value = strdup(value);
	if (new->value == NULL && value != NULL)
		return (0);
	new->next = NULL;
	if (ht->array[index] == NULL)
	{
		ht->array[index] = new;
	}
	else
	{
		new->next = (ht->array)[index];
		(ht->array)[index] = new;
	}
	return (1);
}
