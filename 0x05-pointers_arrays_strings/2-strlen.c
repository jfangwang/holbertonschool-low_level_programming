#include "holberton.h"
#include <stdio.h>
/**
 * _strlen - length of string
 * @s: string
 *Return: Length of string
 */
int _strlen(char *s)
{
	int a = 0;
	while(*s != '\0')
	{
		a++;
		s++;
	}
	return a;
}
