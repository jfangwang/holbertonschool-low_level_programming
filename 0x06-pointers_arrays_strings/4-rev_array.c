#include "holberton.h"
/**
 * reverse_array - prints a string in reverse
 * @a: a
 * @n: n
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int b = 0;
	int temp = 0;

	for (b = n - 1; b >= (n / 2); b--)
	{
		temp = a[n - 1 - b];
		a[n - 1 - b] = a[b];
		a[b] = temp;
	}
}
