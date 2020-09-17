#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10,
 * starting from 0 followed by a new line
 *
 * Description: Uses a for loop to putchar all numbers
 * Return: returns 0
 */
int main(void)
{
	for (int a = 0; a < 10; a++)
	{
		for (int b = a; b < 10; b++)
		{
			putchar(a % 10 + '0');
			putchar(b % 10 + '0');
			putchar(' ');
			for (int c = 0; c < 10; c++)
			{
				for (int d = 0; d < 10; d++)
				{
					putchar(c % 10 + '0');
					putchar(d % 10 + '0');
					if (c == 99 && d == 99)
						break;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
