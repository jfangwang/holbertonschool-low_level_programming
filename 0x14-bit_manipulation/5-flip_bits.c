#include "holberton.h"
/**
*int flip_bits - Write a function that returns the number of bits you would need to flip to get from one number to another.
*@long int n: a variable
*@long int m: a variable
*Return: 0
**/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int count = 0;

	while (n > 0 || m > 0)
	{
		if ((n & 1) != (m & 1))
			count++;
		m = m >> 1;
		n = n >> 1;
	}
	return (count);
}
