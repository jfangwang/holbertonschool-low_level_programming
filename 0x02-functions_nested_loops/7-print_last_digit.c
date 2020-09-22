#include "holberton.h"

/**
 * print_last_digit - Prints the last digit
 * @n: num the sign will be printed on.
 * Return: Val. of last digit
 */
int print_last_digit(int n)
{
	int ld;

	ld = n % 10;
	if (ld < 0)
		ld *= -1;

	_putchar(ld + '0');
	return (ld);
}
