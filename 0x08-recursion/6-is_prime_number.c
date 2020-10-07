#include "holberton.h"
/**
 * check - nat. sqr. root. of n
 * @a: int
 * @ogNum: ogNum
 * Return: root of num
 */
int check(int a, int ogNum)
{
	if (a < 0)
		return (-1);
	if (ogNum % a == 0)
		return (0);
	else if (a > 1)
		return (check(a - 1, ogNum));
	else
		return (1);
}
/**
 * _sqrt_recursion - nat. sqr. root. of n
 * @n: int
 * Return: root of num
 */
int is_prime_number(int n)
{
	int ogNum = n;

	return (check(n - 1, ogNum));
}
