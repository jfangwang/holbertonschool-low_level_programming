#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include "hash_tables.h"
/**
 *hash_table_set - Write a function that adds an element to the hash table.
 *@ht: a variable *@key: a variable
 *@value: a variable
 *Return: 0
 **/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *find, *new;

	index = key_index((unsigned char *)key, ht->size);
	if (ht == NULL || key == NULL || value == NULL || strlen(key) == 0)
		return (0);
	for (find = ht->array[index]; find != NULL; find = find-> next)
	{
		if (strcmp(find->key, key) == 0)
		{
			free(find->value);
			find->value = (char *)value;
			if (find->value == NULL)
				return (0);
			return (1);
		}
	}
	new = add_node(key, value);
	new->next = ht->array[index];
	ht->array[index] = new;
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

	new = malloc(sizeof(hash_table_t *));
	if (new == NULL)
		return (0);
	new->key = strdup(key);
	if (new->key == NULL)
		return (0);
	new->value = strdup(value);
	if (new->value == NULL)
		return (0);
	return (new);
}
