#include "holberton.h"
/**
 * leet - encodes a string into 1337
 * @s: string
 * Return: s
 */
char *leet(char *s)
{
	int a, b;
	char leet[10] = {'A', 'a', 'E', 'e', 'O', 'o', 'T', 't', 'L', 'l'};
	char toleet[5] = {'4', '3', '0', '7', '1'};

	while (s[a] != '\0')
	{
		for (b = 0; b < 10; b++)
			if (s[a] == leet[b])
				s[a] = toleet[b / 2];
		a++;
	}
	return (s);
}
