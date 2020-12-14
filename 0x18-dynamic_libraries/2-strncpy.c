#include "holberton.h"
/**
 * _strncpy - copies a string
 * @dest: dest
 * @src: src
 * @n: n
 * Return: string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;

	while (src[a] != '\0')
	{
		if (a < n)
			dest[a] = src[a];
		else
			break;
		a++;
	}
	for (; a < n; a++)
		dest[a] = '\0';
	return (dest);
}
