#include "stdio.h"
#include "stdarg.h"
#include "string.h"
#include "stdlib.h"
#include "function_pointers.h"
/**
*array_iterator - Write a function that executes a function
*given as a parameter on each element of an array.
*@array: a variable
*@size: a variable
*Return: 0
**/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int willy = 0;

	if (action && array)
	{
		for (willy = 0; willy < size; willy++)
			action(array[willy]);
	}
}
