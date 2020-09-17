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
	int firstNum;
	int secondNum;

	for (firstNum = 0; firstNum < 99; firstNum++)
	{
		for (secondNum = firstNum + 1; secondNum < 100; secondNum++)
		{
			/*
			 * Printing numbers with putchar
			 */
			putchar(firstNum / 10 + '0');
			putchar(firstNum % 10 + '0');
			putchar(' ');
			putchar(secondNum / 10 + '0');
			putchar(secondNum % 10 + '0');
			if (firstNum == 8 && secondNum == 9)
				break;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
