#include <stdio.h>

/**
 * main - prints first 50 fib sequence.
 *
 * Return: 0
 */
int main(void)
{
	int sum = 0, f = 1, s = 2, n = 0;

	while (n < 50)
	{
		//1,2,3,5
		sum += f + s;
		f = s;
		s = sum;
		n++;
	}
	printf("%d", sum);
}
