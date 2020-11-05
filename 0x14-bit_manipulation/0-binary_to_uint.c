#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include "holberton.h"
/**
 *binary_to_uint - Write a function that converts
 *a binary number to an unsigned int.
 *@b: a variable
 *Return: 0
 **/

unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	int bit = 1;
	int sum = 0;

	if (!b)
		return (0);
	while (b[i] != '\0')
		i++;
	i--;
	while (i >= 0)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
			sum += bit;
		bit *= 2;
		i--;
	}

	return (sum);
}
