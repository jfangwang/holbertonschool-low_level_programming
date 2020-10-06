#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the 2 diagonals of a square
 * @a: a
 * @size: size
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int index = 0;
	int leftd = 0;
	int rightd = 0;
	int total = (size * size) - 1;

	while (index < total)
	{
		if (index % (size + 1) == 0)
			leftd += a[index];
		if (index % (size - 1) == 0)
			rightd += a[index];
		index++;
	}
	printf("%d, %d\n", leftd, rightd);
}
