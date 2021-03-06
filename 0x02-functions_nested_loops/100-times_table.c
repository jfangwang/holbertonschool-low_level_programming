#include "holberton.h"

/**
 * print_times_table - Prints n times table ex: 9x9
 * @n: The value of the times table to be printed
 */

void print_times_table(int n)
{
	int row, col, num;

	if (n <= 15 && n >= 0)
	{
		for (row = 0; row < n + 1; row++)
		{
			_putchar('0');
			for (col = 1; col < n + 1; col++)
			{
				num = col * row;
				_putchar(',');
				_putchar(' ');
				if (num < 226 && num >= 100)
				{
					_putchar(num / 100 + '0');
					_putchar(num / 10 % 10 + '0');
					_putchar(num % 10 + '0');
				}
				if (num < 100 && num >= 10)
				{
					_putchar(' ');
					_putchar(num / 10 + '0');
					_putchar(num % 10 + '0');
				}
				if (num < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(num + '0');
				}
			}
		_putchar('\n');
		}
	}
}
