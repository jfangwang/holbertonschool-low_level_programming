#include "holberton.h"
/**
 * print_chessboard - prints chessboard
 * @a: a
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int row = 0;
	int col = 0;

	while (row < 8)
	{
		_putchar(a[row][col]);
		if (col != 8)
			col++;
		else
		{
			col = 0;
			row++;
			_putchar('\n');
		}
	}
}
