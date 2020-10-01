#include "holberton.h"
/**
 * leet - encodes a string into 1337
 * @s: string
 * Return: s
 */
char *leet(char *string)
{
	int a, b;
	char leet[10] = {'A', 'a', 'E', 'e', 'O', 'o', 'T', 't', 'L', 'l'};
	char toleet[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	while (string[a] != '\0')
	{
		for (b = 0; b < 10; b++)
			if (string[a] == leet[b])
			{
				string[a] = toleet[b];
				break;
			}
		a++;
	}
	return (string);
}
