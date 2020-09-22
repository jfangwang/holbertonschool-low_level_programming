#include "holberton.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 */

void times_table(void)
{
	int pRow, pCol, num;

	for (pRow = 0; pRow < 10; pRow++)
	{
		_putchar('0');
		_putchar(',');
		for (pCol = 1; pCol < 10; pCol++)
		{
			num = pRow * pCol;
			if (num < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(num + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(num / 10 + '0');
				_putchar(num % 10 + '0');
			}
			if (pCol != 9)
				_putchar(',');
			else
				break;
		}
		_putchar('\n');
	}
}
