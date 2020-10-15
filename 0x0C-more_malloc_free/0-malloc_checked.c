#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>
/**
* malloc_checked -  a
* @b:  a
* Return: a
*/

void *malloc_checked(unsigned int b)
{
	void *fredrick;

	fredrick = malloc(b);
	if (fredrick == NULL)
		exit(98);
	return (fredrick);
}
