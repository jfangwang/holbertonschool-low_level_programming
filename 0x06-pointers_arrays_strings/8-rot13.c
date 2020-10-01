#include "holberton.h"
/**
 * rot13 - encodes a string to rot13
 * @s: string
 * Return: encdoed rot13 string
 */
char *rot13(char *s)
{
	int a = 0;
	int b = 0;
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklmno";

	while (s[a] != '\0')
	{
		for (b = 0; b < 52; b++)
		{
			if (s[a] == alpha[b])
			{
				s[a] = rot[b];
				break;
			}
		}
		a++;
	}
	return (s);
}
