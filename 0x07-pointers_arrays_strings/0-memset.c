#include "holberton.h"
/**
 * _memset - fill mem with a constant byte
 * @s: s
 * @b: b
 * @n: n
 */
char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	for (a = 0; a < n; a++)
		s[n] = b;
}	
