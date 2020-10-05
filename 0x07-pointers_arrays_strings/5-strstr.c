#include "holberton.h"
/**
 * _strstr - locates a substring
 * @haystack: a
 * @needle: n
 * Return: pointer to the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	int a, b;

	while (haystack[a] != '\0')
	{
		if (haystack[a] == needle[0])
		{
			b = 0;
			while (needle[b] != '\0')
			{
				if (needle[b] != haystack[a + b])
				{
					break;
				}
				b++;
			}
			return (needle);
		}
		a++;
	}
	return ('\0');
}
