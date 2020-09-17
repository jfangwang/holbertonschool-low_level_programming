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
	int a = 0;

	while (a <= '9')
		putchar(a++);
	putchar('\n');
	return (0);
}
