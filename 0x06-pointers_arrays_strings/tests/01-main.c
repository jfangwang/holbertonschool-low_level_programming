#include "../holberton.h"
#include <stdio.h>

/**
 *  * main - check the code for Holberton School students.
 *   *
 *    * Return: Always 0.
 *     */
int main(void)
{
	char s1[98] = "Hello ";
	char s2[] = "World!\n";
	char *p;
	
	p = _strncat(s1, s2, 1024);
	printf("%s", p);
	return (0);
}
