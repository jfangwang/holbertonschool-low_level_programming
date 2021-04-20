#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
/**
 * binary_search - Linear search algorithm
 * @array: array
 * @size: size_t
 * @value: value
 * Return: exit sucess
 */

int binary_search(int *array, size_t size, int value)
{
	int beg = 0;
	int end = (int)size - 1;
	int mid = 0;
	int a = 0;

	if (array == NULL)
		return (-1);
	while (beg <= end)
	{
		mid = (end + beg) / 2;
		printf("Searching in array:");
		for (a = beg; a < end; a++)
			printf("%d, ", array[a]);
		printf("%d\n", array[a]);
		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			beg = mid + 1;
		else
			end = mid - 1;
	}
	return (-1);
}
