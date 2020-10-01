#include "holberton.h"
/**
 * _strncat - concatenates 2 strings
 * @*dest: dest
 * @*src: src
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int b = 0;
	int c = 0;
	while (dest[a++]);
	a -= 1;
	while (src[b++]);
	b -= 1;
	while (c < n)
	{
		dest[a] = src[c];
		a++;
		c++;
	}
	dest[a+1] = '\0';
	return dest;
}
