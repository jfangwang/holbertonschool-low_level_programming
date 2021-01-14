#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include "hash_tables.h"
/**
*key_index - Write a function that gives you the index of a key.
*@unsigned char *key: a variable
*@long int size: a variable
*Return: 0
**/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
