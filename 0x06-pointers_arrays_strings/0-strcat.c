#include "holberton.h"
/**
 * _strcat - concatenate two strings
 * @dest: dest
 * @src: src
 * Return: char
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
	for (c = a + 1; c <= a + b; c++)
		dest[c] = src[c - a];
	dest[c + 1] = '\0';
	return (dest);
}
