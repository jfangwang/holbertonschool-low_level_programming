#include "holberton.h"
/**
 * _strstr - locates a substring
 * @haystack: a
 * @needle: n
 * Return: pointer to the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	int a, b, c;

	while (haystack[a] != '\0')
	{
		b = 0;
		c = a;
		while (haystack[c] == needle[b] && haystack[c] != '\0' && needle[b] != '\0')
		{
			b++;
			c++;
		}
		if (needle[b] == '\0')
			return (needle);
		a++;
	}
	return ('\0');
}
