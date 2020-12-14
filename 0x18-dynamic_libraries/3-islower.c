#include "holberton.h"
/**
 * _islower - Check for lowercase characters
 * @c: c is int and a placement for the character
 * Return: 1 if c is lowercase, 0 if not
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);

	return (0);
}
