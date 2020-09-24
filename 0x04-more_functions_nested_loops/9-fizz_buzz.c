#include <stdio.h>
/**
 * main - runs main
 * Return: 0
 */
int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a % 3 == 0)
		{
			if (a % 5 == 0)
				printf("FizzBuzz");
			else
				printf("Fizz");
		}
		if (a % 5 == 0 && a % 3 != 0)
			printf("Buzz");
		if (a % 5 != 0 && a % 3 != 0)
			printf("%d", a);
		if (a == 100)
			continue;
		else
			putchar(' ');
	}
	printf("\n");
}
