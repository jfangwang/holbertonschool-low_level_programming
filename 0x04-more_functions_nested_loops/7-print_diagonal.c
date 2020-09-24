#include "holberton.h"
/**
 * print_diagonal - draws a diagonal line on term.
 * @n: num of \ to be printed
 * return: diagonal
 */
void print_diagonal(int n)
{
	int a, b;

	if (n > 0)
	{
		for (a = 1; a <= n; a++)
		{
			if (a > 1)
			{
				for (b = 1; b < a; b++)
					_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	if (n <= 0)
		_putchar('\n');
}
