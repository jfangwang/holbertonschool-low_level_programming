#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* 
 * main - prints the alphabet in lowercase, followed by a new line 
 * Description - uses modulus (%) to find the last digit
 * Return: returns 0
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
	if (n == 0)
		printf("and is 0\n");
	if (n < 6)
		printf("and is less than 6 and not 0\n");
	return (0);
}
