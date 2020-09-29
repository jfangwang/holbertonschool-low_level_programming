#include "holberton.h"
/**
 * _strl - returns len of str
 * @s: string
 * Return: len of str
 */
int _strl(char *s)
{
	char *sum = s;

	while (*s)
		s++;
	return (s - sum);
}
/**
 * rev_string - prints a string in reverse
 * @s: input
 */
void rev_string(char *s)
{
	int a = _strl(s);
	int b = 0;
	int temp = 0;
	int c = a - 1;

	for (b = 0; b < (a / 2); b++)
	{
		temp = s[b];
		s[b] = s[c];
		s[c] = temp;
		c--;
	}
}
