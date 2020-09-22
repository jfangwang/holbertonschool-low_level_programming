#include "holberton.h"

/**
 * _abs - Prints the sign of a number.
 * @n: num the sign will be printed on.
 * Return: Abs. values of a number
 */
int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
