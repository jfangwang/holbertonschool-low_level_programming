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
	if (a < 46340)
	{
		if (a * a == ogNum)
			return (a);
		else
			return (check(a - 1, ogNum));
	}
	return (-1);
}
/**
 * _sqrt_recursion - nat. sqr. root. of n
 * @n: int
 * Return: root of num
 */
int _sqrt_recursion(int n)
{
	int ogNum = n;

	return (check(n, ogNum));
}
