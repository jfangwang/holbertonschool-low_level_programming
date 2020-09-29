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

	for (a = 0; src[a] != '\0'; a++)
		dest[a] = src[a];
	for (; a < src[a]; a++)
		dest[a] = '\0';
	return (dest);
}
