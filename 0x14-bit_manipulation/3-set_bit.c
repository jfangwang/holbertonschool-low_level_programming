#include "holberton.h"
/**
*set_bit - Write a function that sets the value of a bit to 1 at a given index.
*@long int *n: a variable
*@int index: a variable
*Return: 0
**/

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int count = 0;
	unsigned long *temp = n;
	unsigned long *bin = 0;

	while (*n > 0)
	{
		count++;
		*n = *n >> 1;
	}
	if (index > count)
		return (-1);
	*bin = *n;
	n = temp;
	return (n | bin);
}
