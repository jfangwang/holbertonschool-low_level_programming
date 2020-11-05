#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include "holberton.h"
/**
*print_binary - Write a function that prints the binary representation of a number.
*@n: a variable
*Return: 0
**/

void print_binary(unsigned long int n)
{
	/*
	int i = 0;
	int bit = 1;
	int sum = 1;
	int bnum = 1;

	if (!n)
		return (0);
	if (n == 1)
		return (1);
	while (bnum < n)
	{
		if (bnum * 2 > n)
			break;
		bnum *= 2;
		bit++;
	}
	while (bit > 0)
	{
		
	}

	return (sum);
	*/
	if (n == 1)
	{
		_putchar(1 + '0');
		return;
	}
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
