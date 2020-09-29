#include "holberton.h"
/**
 * puts_half - half of a string
 * @str: input
 */
void puts_half(char *str)
{
	int a = 0;
	int b = 0;
	int c = 0;

	while (str[a])
		a++;
	if ((a % 2) == 0)
		b = a / 2;
	else
		b = (a + 1) / 2;
	for (c = b; c < a; c++)
		_putchar(str[c]);
	_putchar('\n');
}
