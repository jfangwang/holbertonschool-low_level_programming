#include "holberton.h"
/**
 * more_numbers - prints 10x the num from 0 -14 and new line
 * Return: answer
 */
void more_numbers(void)
{
	int o, a;

	for (a = 0; a < 10; a++)
	{
		for (o = 0; o <= 14; o++)
		{
			if (o >= 10)
				_putchar(o / 10 + '0');
			_putchar(o % 10 + '0');
		}
	_putchar('\n');
	}
}
