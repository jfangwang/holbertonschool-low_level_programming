#include <stdio.h>

int main(void)
{
	for (int a = 0; a < 10; a++)
		putchar(a%10 + '0');
	for (char c = 'a'; c < 'g'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
