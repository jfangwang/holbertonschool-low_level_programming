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
	int *arr = 0;
	int size = 0;
	int a = 0;

	if (min > max)
		return (NULL);
	size = max - min + 1;

	arr = malloc(sizeof(int) * size);

	if (arr == NULL)
		return (NULL);

	for (a = 0; a < size; a++)
	{
		arr[a] = min
		min++;
	}
	return (arr);
}
