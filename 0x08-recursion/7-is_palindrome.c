#include "holberton.h"
/**
 * check - nat. sqr. root. of n
 * @a: int
 * @ogNum: ogNum
 * Return: root of num
 */
int check(int a, int ogNum)
{
	if (a < 1)
		return (0);
	if (a < 2)
		return (1);
	if (ogNum % a == 0)
		return (0);
	return (check(a - 1, ogNum));
}

/**
 * length - gets length of string
 * @s: char
 * Return: length
 */
int length(char *s)
{
	int count;

	if (*s[count] != '\0');
}
/**
 * is_palindrome - nat. sqr. root. of n
 * @n: int
 * Return: root of num
 */
int is_palindrome(int n)
{
	return (check(n - 1, n));
}
