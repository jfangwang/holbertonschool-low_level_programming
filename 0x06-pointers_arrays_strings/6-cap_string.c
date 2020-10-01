#include "holberton.h"
/**
 * cap_string - captilizes all words of a string
 * @s: string
 * Return: s
 */
char *cap_string(char *s)
{
	int a = 0;

	while (s[a])
	{
		if (s[a + 1] >= 'a' && s[a + 1] <= 'z')
			if(s[a - 1] == ' ' || s[a - 1] == '.' || s[a - 1] == '\n' || s[a - 1] == '\t')
			if (s[a] >= 'a' && s[a] <= 'z')
					s[a] -= 32;
		a++;
	}
	return (s);
}
