#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
* calloc -  a
* @int nmemb:  a
* @int size:  a
* Return: a
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int a;
	char *pat;

	if (size == 0 || nmemb == 0)
		return (NULL);
	pat = malloc(nmemb * size);
	if (pat == NULL)
		return (0);
	while (a != size)
	{
		*(pat + (size * a)) = 0;
		a++;
	}
	return (pat);
}

