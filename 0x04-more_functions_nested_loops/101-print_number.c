#include "holberton.h"
/**
 * print_number - prints an integer
 * @n: num
 * Return: num
 */
void print_number(int n)
{
	int rev = 0;
       	int rem = 0; 
	int plc = 0; 
	int overflow = 0;

	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}
	if (n > 0)
	{
		while (n > 0)
		{
			rem = n % 10;
			if (plc >= 9)
				overflow = overflow * 10 + rem;
			else
				rev = rev * 10 + rem;
			n /= 10;
			plc++;
		}
		while (overflow > 0)
		{
			_putchar((overflow % 10) + '0');
			overflow /= 10;
		}
		for (int a = 1; a <= plc; a++)
		{
			_putchar((rev % 10) + '0');
			rev /= 10;
		}
	}
	else
		_putchar(n + '0');
}
