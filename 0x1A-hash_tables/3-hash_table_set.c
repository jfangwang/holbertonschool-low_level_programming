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

	if (ht->size == 0 || ht == NULL || ht->array == NULL || key == NULL ||
	    value == NULL || strlen(key) == 0 || !(*key) || !(*value))
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	new = add_node(key, value);
	if (ht->array[index] == NULL)
	{
		ht->array[index] = new;
		if (ht->array[index] == NULL)
			return (0);
		return (1);
	}
	/**
	 * Replace Value if key exists already
	*/
	for (find = ht->array[index]; find != NULL; find = find->next)
	{
		if (strcmp(find->key, key) == 0)
		{
			free(find->value);
			find->value = strdup(value);
			return (1);
		}
	}
	new->next = find;
	ht->array[index]->next = new;
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
	new->value = strdup(value);
	new->next = NULL;
	return (new);
}
