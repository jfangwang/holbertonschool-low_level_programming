#include "holberton.h"
/**
 *clear_bit - Write a function that sets
 *the value of a bit to 0 at a given index.
 *@n: a variable
 *@index: a variable
 *Return: 0
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = *n & ~(1 << index);
	return (1);
}
