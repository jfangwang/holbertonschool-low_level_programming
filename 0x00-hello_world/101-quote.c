#include <stdio.h>
#include <unistd.h>

/*
 * main - Prints "and that piece of art is useful - Dora Korpar, 2015-10-19"
 * 
 * Description: Uses write to print the statement
 *
 * Return: returns 1
 */
int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19", 58);
	return (1);
}
