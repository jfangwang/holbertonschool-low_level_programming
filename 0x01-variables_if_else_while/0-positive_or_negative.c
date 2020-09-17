#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - tells you if random number is negative or positive
 *
 * Description: Uses if else to print if # if neg/pos/zero
 * Return: returns zero
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
		printf(n + " is negative\n");
	if (n == 0)
		printf(n + " is zero\n");
	if (n > 0)
		printf(n + " is positive\n");
	return (0);
}
