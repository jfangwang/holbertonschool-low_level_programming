#include "holberton.h"
/**
 * print_diagsums - prints the sum of the 2 diagonals of a square
 * @a: a
 * @size: size
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int row = 0;
	int col = 0;
	int leftd = 0;
	int rightd = 0;

	while (row < size)
	{
		col = 0;
		while (col < size)
		{	
			if (row == col)
				leftd += *( *(a + row) + col);
			if (size - 1 - row == col)
				rightd += *( *(a + row) + col);
			col++;
		}
		row++;
	}
	printf("%d, %d\n", leftd, rightd);
}
