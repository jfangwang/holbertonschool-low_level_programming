#include <stdio.h>
/**
 * main - prints the larget prime factor of a num
 * Return: 0
 */
int main(void)
{
	long n = 612852475143;
	long a, b, fact;
	/*
	 * List prime nums
	 */
	for (a = 2; a < n; a++)
	{
		fact = 0;
		for (b = 2; b < a; b++)
		{
			if (a % b == 0)
				fact += 1;
		}
		if (fact == 0)
		{
			if (n % a == 0)
				n /= a;
		}
	}
	printf("%ld\n", n);
	return (0);
}
