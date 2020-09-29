#include "holberton.h"
/**
 * print_rev - prints a string in reverse
 * @s: input
 */
void rev_string(char *s)
{
	int a = 0;
	int b = 0;

	while (*s)
	{
		_putchar('');
	}
	for (b = a - 1; b >= 0; b--)
		_putchar(s[b]);
	_putchar('\n');
}
