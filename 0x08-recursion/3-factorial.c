#include "holberton.h"
/**
 * factorial - prints fact
 * @n: int
 * Return: fact
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1)
		return (n);
	return (n * factorial(n - 1));
}
