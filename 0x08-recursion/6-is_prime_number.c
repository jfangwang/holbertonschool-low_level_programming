#include "holberton.h"
/**
 * is_prime_number - prints fact
 * @n: n
 * Return: x^y
 */
int check (int ogNum, int current)
{
	if (ogNum % current == 0 && current < ogNum)
		return (0);
	else
		return check(ogNum, current + 1);
	return (1);
}
int is_prime_number(int n)
{
	int s = 2;

	if (n <= 1)
		return (0);
	return check(n, s);
}
