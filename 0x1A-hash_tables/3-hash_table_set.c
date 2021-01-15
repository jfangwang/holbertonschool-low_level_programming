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

	if (ht->size == 0 || ht == NULL)
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
	new = add_node(key, value);
	if (new == NULL || new->value == NULL)
		return (0);
	if (find == NULL)
	{
		ht->array[index] = new;
	}
	else
	{
		new->next = ht->array[index];
		ht->array[index] = new;
	}
	return (1);
}
/**
 *add_node - Write a function that adds an element to the hash table.
 *@key: a variable
 *@value: a variable
 *Return: 0
**/
hash_node_t *add_node(const char *key, const char *value)
{
	hash_node_t *new;

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (NULL);
	new->key = strdup(key);
	if (key == NULL)
		return (NULL);
	new->value = strdup(value);
	if (value == NULL)
		return (NULL);
	new->next = NULL;
	return (new);
}
