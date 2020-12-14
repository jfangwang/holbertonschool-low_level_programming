#include "holberton.h"
/**
 * _strlen_recursion - prints a string
 * @s: string
 * Return: string
 */
int _strlen_recursion(char *s)
{
	int a = 0;

	if (*s != '\0')
	{
		a++;
		a += _strlen_recursion(s + 1);
	}
	return (a);
}
