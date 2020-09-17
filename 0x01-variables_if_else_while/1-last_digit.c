#include <stdlib.h>
#include <time.h>
#include <stdio.h>

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
	int last_digit = n % 10;

	printf("Last digit of %d is %d ", n, last_digit);
	if (n > 5)
		printf("and is greater than 5\n");
	else if (n != 0 && n < 6)
		printf("and is less than 6 and not 0\n");
	else
		printf("and is 0\n");
	return (0);
}
