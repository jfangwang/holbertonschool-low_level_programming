#include "holberton.h"
/**
 * print_number - prints an integer
 * @n: num
 * Return: num
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	/*
	 * Recursion
	 */
	if (n > 0)
		print_number(n / 10);
	else if (n == 0)
		return;
	_putchar(n % 10 + '0');
}
