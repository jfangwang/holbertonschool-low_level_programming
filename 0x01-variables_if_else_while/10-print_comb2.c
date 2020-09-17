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
	int a;
	int b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			putchar(a % 10 + '0');
			putchar(b % 10 + '0');
			if (a == 9 && b == 9)
				break;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
