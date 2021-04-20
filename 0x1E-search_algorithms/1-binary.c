#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
/**
 * binary_search = Linear search algorithm
 * @array: array
 * @size: size_t
 * @value: value
 * Return: exit sucess
 */

int binary_search(int *array, size_t size, int value)
{
	int beg = 0;
    int end = (int)size - 1;
    int index = 0;
    int dif;
	while (index < (int)size)
	{
        dif = end + beg;
        printf("Searching in array: ");
		for (int a = 0; a < end; a++)
        {
            printf("%d", array[a]);
        }
        printf("\n");
		if (value == array[round(dif / 2)])
            return value;
        if (value < array[round(dif / 2)])
            end = round(size / 2);
        else
            beg = round(size / 2);
        index += 1;
	}
	return -1;
}