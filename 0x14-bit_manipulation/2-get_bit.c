#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include "holberton.h"
/**
*get_bit - Write a function that returns the value of a bit at a given index.
*@n: a variable
*@index: a variable
*Return: 0
**/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int count = 0;
	unsigned long temp = n;

	while (n > 0)
	{
		count++;
		/*printf("n: %lu\n", n & 1);*/
		n = n >> 1;
	}
	if (index > count)
		return (-1);
	n = temp;
	return (n >> index & 1);
}
