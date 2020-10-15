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
	int *arr, size;

	if (min < max)
		return (NULL);
	size = max - min + 1;
	arr = malloc(sizeof(int) * size);
	if (arr == NULL)
		return (0);
	int a = 0;

	while (a < size)
	{
		arr[a] = min++;
		a++;
	}
	return (arr);
}

