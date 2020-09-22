#include <stdio.h>
#include <string.h>

int main(void)
{
	int a;
	char string[32] = "Holberton";
	while (string[a] != '\0')
	{
		putchar(string[a]);
		a++;
	}
	putchar('\n');
	return (0);
}
