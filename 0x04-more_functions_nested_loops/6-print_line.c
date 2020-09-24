#include "holberton.h"

/**
 * print_line - draws a straight line in the term.
 * @n: input
 * Result: n or 0
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	int a;

	for (a = 0; a < n; a++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
