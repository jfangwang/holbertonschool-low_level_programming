#include "holberton.h"
#include <stdio.h>
/**
 * main - prints the num of args
 * @a: argc
 * @b: argv
 * Return: num of args
 */
int main(int a, char *b[])
{
	(void)b;
	printf("%d\n", a - 1);
	return (0);
}
