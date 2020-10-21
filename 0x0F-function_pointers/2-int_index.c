#include "function_pointers.h"
/**
*int_index - Write a function that searches for an integer.
*@array: a variable
*@size: a variable
*@cmp: a variable
*Return: 0
**/

int int_index(int *array, int size, int (*cmp)(int))
{
	int willy = 0;

	if (array && cmp && size)
		for (willy = 0; willy < size; willy++)
		{
			cmp(array[willy]);
			if (cmp(array[willy]))
				return (willy);
		}
	return (-1);
}
