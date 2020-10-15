#include <stdlib.h>
#include "holberton.h"

/**
* _calloc -  a
* @nmemb:  a
* @size:  a
* Return: a
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int a;
	char *pat;
	void *output;

	if (size <= 0 || nmemb <= 0)
		return (NULL);
	output = malloc(nmemb * size);
	if (output == NULL)
		return (NULL);
	pat = output;
	for (a = 0; a < size * nmemb; a++)
		pat[a] = '\0';
	return (output);
}

