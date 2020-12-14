#include "holberton.h"
/**
 * _memcpy - copies memory area
 * @dest: char
 * @src: char
 * @n: unsigned int
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a = 0;

	for (a = 0; a < n; a++)
		dest[a] = src[a];
	return (dest);
}
