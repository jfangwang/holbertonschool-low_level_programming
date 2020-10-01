#include "holberton.h"
/**
 * _strncat - concatenate two strings
 * @dest: dest
 * @src: src
 * @n: n
 * Return: char
 */
char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int b = 0;
	int c = 0;

	while (dest[b])
		b++;
	while (src[c])
		c++;
	for (a = 0; a < n; a++)
	{
		if (a < c)
			dest[b++] = src[a];
		else
			break;
	}
	return (dest);
}
