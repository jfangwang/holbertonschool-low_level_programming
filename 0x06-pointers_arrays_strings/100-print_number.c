#include "holberton.h"
/**
 * print_number - prints integers as is recursively
 * @n: input
 * Return: Integer
 */
void print_num(int n)
{
	if (n < 0)
	{
		if (n > -10)
		{
			_putchar('-');
			_putchar(((n % 10) * -1) + '0');
		}
		else
		{
			print_num(n / 10);
			_putchar(((n % 10) * -1) + '0');
		}
	}
	else if (n > 0)
	{
		if (n < 10)
			_putchar(n % 10 + '0');
		else
		{
			print_num(n / 10);
			_putchar(n % 10 + '0');
		}
	}
	else
		_putchar('0');	
}
