#include "holberton.h"
/**
 * cap_string - captilizes all words of a string
 * @s: string
 * Return: s
 */
char *cap_string(char *s)
{
	int a = 0;
	int b = 0;
	int c = 0;

	while (s[a])
	{
		b = a - 1;
		c = a + 1;
		if (s[0] >= 'a' && s[0] <='z' && a == 0)
			s[0] -= 32;
		if ((s[c] >= 'a' && s[c] <= 'z') || (s[c] == ' '))
		{
			if (s[b] == ' ' ||
			    s[b] == '.' ||
			    s[b] == '\n' ||
			    s[b] == '\t' ||
			    s[b] == ',' ||
			    s[b] == ';' ||
			    s[b] == '!' ||
			    s[b] == '?' ||
			    s[b] == '"' ||
			    s[b] == '(' ||
			    s[b] == ')' ||
			    s[b] == '{' ||
			    s[b] == '}' )
			{
				if (s[a] >= 'a' && s[a] <= 'z')
					s[a] -= 32;
			}
		}
		a++;
	}
	return (s);
}
