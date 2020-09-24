#include "holberton.h"
/**
 * print_number - prints an integer
 * @n: num
 * Return: 0
 */
void print_number(int n)
{
	int rev = 0;
	int rem = 0;

	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}

	while (n > 0)
	{
		rem = n % 10;
		rev = rev * 10 + rem;
		n /= 10;
	}
	while (rev > 0)
	{
		_putchar((rev % 10) + '0');
		rev /= 10;
	}
	if (n ==0)
		_putchar('0');
}
