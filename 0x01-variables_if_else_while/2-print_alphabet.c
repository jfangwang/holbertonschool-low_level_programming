#include <stdio.h>

/**
 * main - outputs a-z
 *
 * Description: Uses a for loop and putchar to output a-z and newline
 * Return: returns 0
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	putchar('\n')
	return (0);
}
