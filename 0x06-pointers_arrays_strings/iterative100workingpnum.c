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
	int rev2 = 0;
	int posneg = 1;

	if (n == 0)
		_putchar(0 + '0');
	if (n < 0)
		_putchar('-');
	if (n < 0)
		posneg = -1;
	while (n != 0)
	{
		if (plc < 9)
			rev = (rev * 10) + (posneg * (n % 10));
		else
			rev2 = (rev2 * 10) + (posneg * (n % 10));
		n /= 10;
		plc++;
	}
	while (plc > 0)
	{
		if (rev2 > 0)
		{
			_putchar(rev2 % 10 + '0');
			rev2 /= 10;
		}
		else
		{
			_putchar(rev % 10 + '0');
			rev /= 10;
		}
		plc--;
	}
}
