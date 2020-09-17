#include <stdio.h>

/**
 * main - outputs all base 10 numbers using putchar
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
