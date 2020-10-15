#include <stdio.h>
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

	if (size <= 0 || nmemb <= 0)
		return (NULL);
	pat = malloc(nmemb * size);
	if (pat == NULL)
		return (NULL);
	while (a != size)
	{
		*(pat + a) = 0;
		a++;
	}
	return (pat);
}

