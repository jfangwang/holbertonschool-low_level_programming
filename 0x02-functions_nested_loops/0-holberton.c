#include <stdio.h>
#include <string.h>

/**
 * main - Prints "Holberton" with new line
 *
 * Return: 0
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
