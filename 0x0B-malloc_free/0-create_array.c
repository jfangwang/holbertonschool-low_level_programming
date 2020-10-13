#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
* create_array - creates an array of chars
* @size:c
* @c:c
* Return:charArr
*/
char *create_array(unsigned int size, char c)
{
	char *charArr;
	unsigned int index;

	if (size == 0)
		return (NULL);

	charArr = malloc(sizeof(char) * size);

	if (charArr == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		charArr[index] = c;

	return (charArr);
}
