#include "holberton.h"
#include <stdio.h>
/**
 * print_rev - prints a string in reverse
 * @s: input
 */
void rev_string(char *s)
{
	int a = 0;
	int b = 0;

	for (a = 0; a != '\0'; a++)
		a++;
	for (b = a - 1; b >= 0; b--)
		printf(s);
	_putchar('\n');
}
