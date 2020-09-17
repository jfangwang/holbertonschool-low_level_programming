#include <stdio.h>

/**
 * main - Prints out the alphabet in lowercase,
 * then uppercase followed by a newline
 *
 *  Description: Uses two seperate for loops for lower and upper
 *  Return: returns 0
 */
int main(void)
{
	char upper;
	char lower;

	for (lower = 'a'; lower <= 'z'; lower++)
		putchar(lower);
	for (upper = 'A'; upper <= 'Z'; upper++)
		putchar(upper);
	printf("\n");
	return (0);
}
