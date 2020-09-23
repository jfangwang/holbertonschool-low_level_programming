#include <stdio.h>

/*
 * main - Lists Natural Numbers multiple of 3 or 5 under 1024
 * Return: 0
 */
int main(void)
{
	int num, total;

	for (num = 0; num < 1024; num++)
	{
		if (num % 3 == 0 || num % 5 == 0)
			total += num;
	}
	printf("%d\n", total);
}
