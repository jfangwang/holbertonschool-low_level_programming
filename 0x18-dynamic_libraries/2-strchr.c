#include "holberton.h"
/**
 * _strchr - locates a character in a string
 * @s: s
 * @c: c
 * Return: string
 */
char *_strchr(char *s, char c)
{
	int a = 0;

	while (s[a] != '\0')
	{
		if (s[a] == c)
			return (s + a);
		a++;
	}
	if (s[a] == c)
		return (s + a);
	return ('\0');
}
