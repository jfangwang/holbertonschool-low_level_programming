#include <stdio.h>

int main(void)
{
	for (int a = 0; a < 10; a++)
	{
		putchar(a%10 + '0');
	}
	putchar('\n');
	return (0);
}
