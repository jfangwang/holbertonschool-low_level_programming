#include "holberton.h"

/**
 * _isupper - returns 1 if c is uppercase
 * @c: placeholder
 * Return: 0 or 1
 */
int _isupper(int c)
{
	if (c <= 'A' && c >= 'Z')
		return (1);
	else
		return (0);
}
