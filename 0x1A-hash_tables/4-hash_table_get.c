#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include "hash_tables.h"
/**
 **hash_table_get - Retrieves a value associated with a key.
 *@ht: a variable
 *@key: a variable
 *Return: 0
 **/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *find;

	if (ht == NULL || !(*key) || key == NULL || strlen(key) == 0)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
		return (NULL);
	for (find = ht->array[index]; find != NULL; find = find->next)
	{
		if (strcmp(find->key, key) == 0)
			return (find->value);
	}
	return (NULL);
}
