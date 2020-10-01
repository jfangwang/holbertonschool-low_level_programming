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

	for (b = 0; b <= (n / 2); b++)
	{
		temp = a[b];
		a[b] = a[n - 1];
		a[n - 1] = temp;
		n--;
	}
}
