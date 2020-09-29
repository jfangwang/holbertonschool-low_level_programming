#include "holberton.h"
/**
 * rev_string - prints a string in reverse
 * @s: input
 */
void rev_string(char *s)
{
	int a = 0;
	int b = 0;
	int temp = 0;

	while (s[a] != '\0')
		a++;
	int c = a;

	for (b = 0; b < (a / 2); b++)
	{
		temp = s[b];
		s[b] = s[c - 1];
		s[c - 1] = temp;
		c--;
	}
}
