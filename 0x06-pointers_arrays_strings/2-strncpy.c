#include "holberton.h"
/**
 * *_strncpy - copies a string
 * @*dest: dest
 * @*src: src
 * return: string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;

	while (src[a] != '\0' && a < n)
	{
		dest[a] = src[a];
		a++;
	}
	dest[a + 1] = '\0';
	return (dest);
}
