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
	unsigned int count = 0;
	unsigned long int temp = n;

	while (n > 0)
	{
		count++;
		n = n >> 1;
	}
	if (index > count)
		return (-1);
	if (index >= 64)
		return (-1);
	n = temp;

	return (n >> index & 1);
}
