#include <stdio.h>

/**
 * main - prints first 50 fib sequence.
 *
 * Return: 0
 */
int main(void)
{
	int sum = 0, f = 1, s = 2, t = 0, n = 0;

	while (n < 9)
	{
		//1,2,3,5
		printf("%d, ", f);
		sum += f + s;
		t = f + s;
		f = s;
		s = t;
		n++;
	}
	printf("%d\n", f);
}
