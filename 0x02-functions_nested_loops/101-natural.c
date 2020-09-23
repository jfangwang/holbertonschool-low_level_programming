#include <stdio.h>

/**
 * main - prints the sum of all Natural Numbers that are
 * multiples of 3 or 5 below 1024.
 * Description: Prints the answer
 * Return: 0
 */
int main(void)
{
	int num, total;

	for (num = 0; num < 1024; num++)
	{
		if ((num % 3 == 0) || (num % 5 == 0))
			total += num;
	}
	printf("%d\n", total);
	return (0);
}

