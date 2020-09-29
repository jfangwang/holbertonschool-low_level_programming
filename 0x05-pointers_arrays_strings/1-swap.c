#include "holberton.h"
/**
 * swap_int - swap the vals of 2 ints
 * @a: val 1
 * @b: val 2
 * Return: answer
 */
void swap_int(int *a, int *b)
{
	int temp = *b;
	*b = *a;
	*a = temp;
}
