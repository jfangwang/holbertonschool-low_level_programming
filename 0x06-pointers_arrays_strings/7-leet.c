#include "holberton.h"
/**
 * leet - encodes a string into 1337
 * @s: string to leet
 * Return: A pointer to the encoded leet string
 */
char *leet(char *s)
{
	int a = 0;
	int b = 0;
	char leet[] = {'A', 'a', 'E', 'e', 'O', 'o', 'T', 't', 'L', 'l'};
	char toleet[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	while (s[a] != '\0')
	{
		for (b = 0; b < 10; b++)
		{
			if (s[a] == leet[b])
			{
				s[a] = toleet[b];
				break;
			}
		}
		a++;
	}
	return (s);
}
