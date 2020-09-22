#include "holberton.h"

/**
 * print_alphabet_x10 - print alpha 10 times in a row
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int o;

	char i;

	for (o = 0; o < 10; o++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		putchar('\n');
	}
}
