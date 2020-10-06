#include "holberton.h"
#include <stdio.h>
/**
 * _strstr - locates a substring
 * @haystack: a
 * @needle: n
 * Return: pointer to the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	int hc, nc, initialhc;

	while (haystack[hc] != '\0')
	{
		initialhc = hc;
		while (needle[nc] == haystack[hc] &&
			needle[nc] != '\0' && haystack[hc] != '\0')
		{
			nc++;
			hc++;
		}
		if (needle[nc] == '\0')
			return (haystack + initialhc);
		hc++;
	}
	return ('\0');
}
