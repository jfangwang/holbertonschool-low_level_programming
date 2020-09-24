#include "holberton.h"
/**
 * print_square - prints a square and a new line
 * @size: placement
 */
void print_square(int size)
{
	int row, col;

	if (size > 0)
	{
		for (row = 1; row <= size; row++)
		{
			for (col = 1; col <= size; col++)
				_putchar('#');
			_putchar('\n');
		}
	}
	if (size <= 0)
		_putchar('\n');
}
