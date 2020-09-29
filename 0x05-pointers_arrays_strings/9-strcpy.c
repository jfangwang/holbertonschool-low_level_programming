#include "holberton.h"
/**
 * _strcpy - copies the string pointed to by src including term. null byte
 * @dest: input
 * @src: input
 * Return: the copy of src
 */
char *_strcpy(char *dest, char *src)
{
	int a = 0;

	while (src[a] != '\0')
	{	
		dest[a] = src[a];
		a++;
	}
	a = 0;
	while (src[a])
	{
		dest[a] = '\0';
		a++;
	}


	return (dest);
}
