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

	while (dest[a++])
		b++;
	for (a = 0; src[a]; a++)
		dest[b++] = src[a];
	return (dest);
}
