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
	int initialcount = 0;

	while (s[a] != '\0')
	{
		b = 0;
		initialcount = counter;
		while (accept[b] != '\0')
		{
			if (s[a] == accept[b])
			{
				counter++;
				break;
			}
			b++;
		}
		if (initialcount == counter)
			return (counter);
		a++;
	}
	return (counter);
}
