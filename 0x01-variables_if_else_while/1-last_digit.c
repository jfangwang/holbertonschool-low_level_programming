#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int last_digit = n % 10;

	printf("The last digit of %d is %d ", n, last_digit);
	if (n > 5)
		printf("and is greater than 5");
	if (n == 0)
		printf("and is 0");
	if (n < 6)
		printf("and is less than 6 and not 0");
	return (0);
}
