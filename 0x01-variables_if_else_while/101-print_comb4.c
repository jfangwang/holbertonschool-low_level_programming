#include <stdio.h>

int main(void)
{
	for (int a = 0; a < 10; a++)
	{
		for (int b = a; b < 10; b++)
		{
			for (int c = b; c < 10; c++)
	                {
				putchar(a % 10 + '0');
				putchar(b % 10 + '0');
				putchar(c % 10 + '0');
				if (b == 9 && a == 9 && c == 9)
					break;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
