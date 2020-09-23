#include <stdio.h>

/**
 * main - prints first 50 fib sequence.
 *
 * Return: 0
 */
int main(void)
{
	long sum = 0, f = 1, s = 2, t = 0, n = 0;

	while (n < 49)
	{
		printf("%ld, ", f);
		sum += f + s;
		t = f + s;
		f = s;
		s = t;
		n++;
	}
	printf("%ld\n", f);
	return (0);
}
