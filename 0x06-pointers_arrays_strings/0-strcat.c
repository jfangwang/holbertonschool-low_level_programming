#include "holberton.h"
/**
 * _*strcat - concatenate two strings
 * @*dest: dest
 * @*src: src
 * return: 0
 */
char *_strcat(char *dest, char *src)
{
	int a = 0;
	int b = 0;
	int c = 0;

	while (src[b] != '\0')
		b++;
	while (dest[a] != '\0')
		a++;
	for (c = a; c <= a + b; c++){
		dest[c] = src[c - a];
	}
	dest[c + 1] = '\0';
	return dest;
}
