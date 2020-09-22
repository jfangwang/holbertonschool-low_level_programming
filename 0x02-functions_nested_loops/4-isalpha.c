#include "holberton.h"

/**
 *_isalpha - Checks for alpha char
 *@c: Placement for char
 *Return: 1 if c is upper or lower, 0 if not
 */
int _isalpha(int c)
{
	if(c >= 97 && c <= 122)
		return (1);

	return (0);
}
