#include <stdio.h>
#include <math.h>
/**
 * main - prints the larget prime factor of a num
 * Return: 0
 */
int main(void)
{
	long n = 300;
	long a;

	for (a = 2; a < n; a++)
		while (n % a == 0)
			n /= a;
	printf("%ld\n", n);
	return (0);
}
