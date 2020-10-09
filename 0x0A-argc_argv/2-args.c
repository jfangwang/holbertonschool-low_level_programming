#include "holberton.h"
#include <stdio.h>
/**
 * main - prints the num of args received
 * @a: argc
 * @b: argv
 * Return: num of args received
 */
int main(int a, char *b[])
{
	int count = 0;

	while (count < a)
	{
		printf("%s\n", b[count]);
		count++;
	}
	return (0);
}
