#include "holberton.h"

/**
 * print_numbers - prints num 0 - 9 and new line
 *
 * Return: Returns answer
 */
void print_numbers(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
		_putchar(a);
	_putchar('\n');
}
