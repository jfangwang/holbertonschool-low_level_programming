#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - tells you if random number is negative or positive
 *
 * Description: Uses if else to print if # if neg/pos/zero
 * Return: returns zero
 */
int positive_or_negative(int n)
{
	if (n < 0)
		printf("%d is negative\n", n);
	if (n == 0)
		printf("%d is zero\n", n);
	if (n > 0)
		printf("%d is positive\n", n);
	return (0);
}
