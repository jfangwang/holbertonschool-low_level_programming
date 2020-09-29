#include "holberton.h"
/**
 * print_rev - prints a string in reverse
 * @s: input
 */
void print_rev(char *s)
{
	for (int a = 0; s[a] != '\0'; a++)
	for (int b = a - 1; b >= 0; b--)
		_putchar(s[b]);
	_putchar('\n');
}
