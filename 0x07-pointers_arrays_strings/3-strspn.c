#include "holberton.h"
/**
 * _strspn - Function that gets the len of a prefix string
 * @s: s
 * @accept: a
 * Return: length
 */
unsigned int _strspn(char *s, char *accept)
{
	int counter = 0;
	int a = 0;
	int b = 0;

	while (accept[a] != '\0')
	{
		b = 0;
		while (s[b] != '\0')
		{
			if (s[b] == accept[a])
			{
				counter++;
				break;
			}
			b++;
		}
		a++;
		return (counter);
	}
	return (counter);
}
