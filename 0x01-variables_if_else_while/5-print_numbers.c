#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10,
 * starting from 0 followed by a new line
 *
 * Description: Uses a for loop and printf
 * Return: returns 0
 */
int main(void)
{	
	int a;

	for (a = 0; a < 10; a++)
		printf("%d", a);
	putchar('\n');
	return (0);
}
