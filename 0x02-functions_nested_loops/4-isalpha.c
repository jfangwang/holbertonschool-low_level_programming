#include "holberton.h"

/**
 *_isalpha - Checks for alpha char
 *@c: Placement for char
 *
 *Return: 1 if c is upper or lower, 0 if not
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
