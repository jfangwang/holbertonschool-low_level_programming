#include "holberton.h"
/**
 * _puts - prints a string
 * @*str - input
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str++);
	}
	_putchar('\n');
}