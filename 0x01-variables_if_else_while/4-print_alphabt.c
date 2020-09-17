#include <stdio.h>

/**
 * Main: Prints the alphabet in lowercase followed by a new line
 *
 * Description: Uses a for loop printing each letter with putchar
 * 
 * Return: Returns 0
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	printf("\n");
	return (0);
}
