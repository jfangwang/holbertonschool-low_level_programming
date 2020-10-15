#include <stdlib.h>
#include "holberton.h"

/**
* array_range -  a
* @min:  a
* @max:  a
* Return: a
*/

int *array_range(int min, int max)
{
	int *arr
	int size;

	if (min > max)
		return (NULL);
	size = max - min + 1;

	arr = malloc(sizeof(int) * size);

	if (arr == NULL)
		return (NULL);
	int a = 0;

	for (a = 0; a < size; a++)
		arr[a] = min++;
	return (arr);
}
