#include "holberton.h"
/**
 *get_bit - Write a function that returns
 *the value of a bit at a given index.
 *@n: a variable
 *@index: a variable
 *Return: 0
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 64)
		return (-1);
	return (n >> index & 1);
}
