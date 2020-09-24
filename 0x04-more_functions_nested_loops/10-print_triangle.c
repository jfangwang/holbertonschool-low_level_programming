#include "holberton.h"
/**
 * print_triangle - prints a triangle and a new line
 * @size: size of triangle
 */
void print_triangle(int size)
{
	int row, col, s;

	for (row = 1; row <= size; row++)
	{
		s = size - row;
		for (col = 1; col <= size; col++)
		{
			if (s == 0)
				_putchar('#');
			if (s > 0)
			{
				_putchar(' ');
				s--;
			}
		}
		_putchar('\n');
	}
}
