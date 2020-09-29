#include "holberton.h"
/**
 * puts2 - prints every other charcter
 * @str: input
 */
void puts2(char *str)
{
	int a = 0;
	int b = 0;

	while (str[a])
	{
		a++;
	}
	for (b = 0; b < a; b += 2)
		_putchar(str[b]);
	_putchar('\n');
}
