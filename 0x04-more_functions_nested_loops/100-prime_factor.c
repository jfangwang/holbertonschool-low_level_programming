#include <stdio.h>
#include <math.h>
/**
 * main - prints the larget prime factor of a num
 * Return: 0
 */
int main(void)
{
	long n = 612852475143;
	long a;

	for (a = 2; a < sqrt(n); a++)
	{
		while (n % a == 0)
			n /= a;
	}
	printf("%ld\n", n);
	return (0);
}
