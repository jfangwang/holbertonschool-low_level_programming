#include "holberton.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array
 * @a: input
 * @n: input
 */
void print_array(int *a, int n)
{
	int b = 0;

	while (b < n)
	{
		printf("%d", a[b]);
		if (b == n - 1)
			break;
		printf(", ");
		b++;
	}
	printf("\n");
}
