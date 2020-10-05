#include "holberton.h"
/**
 * _strpbrk - function that searches a string for any set of bytes
 * @s: s
 * @accept: a
 * Return: pointer to the byte in s matching accept
 */
char *_strpbrk(char *s, char *accept)
{
	int a = 0;
	int b = 0;

	while (s[a] != '\0' || accept[a] != '\0')
	{
		if (s[a] == accept[a])
		{
			while (accept[b] != '\0')
			{
				return (s + a - 1);
			}
		}
		a++;
	}
	if (b == 0)
		return ('\0');
	return (0);
}
