#include "holberton.h"
/**
 * cap_string - captilizes all words of a string
 * @s: string
 * Return: s
 */
char *cap_string(char *s)
{
	int a = 0;
	int b = a - 1;
	int c = a + 1;

	while (s[a])
	{
		if (s[c] >= 'a' && s[c] <= 'z')
			if (s[b] == ' ' || s[b] == '.' || s[b] == '\n' || s[b] == '\t')
				if (s[a] >= 'a' && s[a] <= 'z')
					s[a] -= 32;
		a++;
	}
	return (s);
}
