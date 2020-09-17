#include <stdio.h>

int main(void)
{
	char upper;
	char lower;

	for (lower = 'a'; lower <= 'z'; lower++)
		putchar(lower);
	for (upper = 'A'; upper <= 'Z'; upper++)
		putchar(upper);
	return (0);
}
