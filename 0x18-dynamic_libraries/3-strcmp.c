#include "holberton.h"
/**
 * _strcmp - compares 2 strings
 * @s1: s1
 * @s2: s2
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int a = 0;

	while (s1[a] == s2[a])
	{
		if (s1[a] != '\0' || s2[a] != '\0')
			a++;
		else
			break;
	}
	return (s1[a] - s2[a]);
}
