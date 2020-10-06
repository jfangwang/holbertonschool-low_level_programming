#include "holberton.h"
#include <stdio.h>
/**
 * _strpbrk - function that searches a string for any set of bytes
 * @s: s
 * @accept: a
 * Return: pointer to the byte in s matching accept
 */
char *_strpbrk(char *s, char *accept)
{
	int sindex = 0;
	int aindex = 0;
	int closest = 0;
	int len = 0;

	while (s[sindex] != '\0')
	{
		sindex++;
		len++;
	}
	sindex = 0;
	closest = len;
	while (accept[aindex] != '\0')
	{
		sindex = 0;
		while (s[sindex] != '\0')
		{
			if (*(s + sindex) == *(accept + aindex))
				return (s + i);
		}
		aindex++;
	}
	return (NULL);
}
