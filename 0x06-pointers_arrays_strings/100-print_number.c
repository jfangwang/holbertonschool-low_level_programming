#include "holberton.h"
/**
* print_number - literally print a number
* @n: n
* Return: void
*/
void print_number(int n)
{
	int plc = 0;
	int rev = 0;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	if (n == 0)
		_putchar(0 + '0');
	while (n > 0)
	{
		rev = (rev * 10) + (n % 10);
		n /= 10;
		plc++;
	}
	while (rev > 0 && plc > 0)
	{
		_putchar(rev % 10 + '0');
		rev /= 10;
		plc--;
	}

}
