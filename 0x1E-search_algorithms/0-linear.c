#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
/**
 * linear_search - Linear search algorithm
 * @array: array
 * @size: size_t
 * @value: value
 * Return: exit sucess
 */

int linear_search(int *array, size_t size, int value)
{
	int index = 0;

	if (array == NULL)
		return (-1);
	while (index < (int)size)
	{
		printf("Value checked array[%d] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return (index);
		index++;
	}
	return (-1);
}
