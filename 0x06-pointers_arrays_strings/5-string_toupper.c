#include "holberton.h"
/**
 * string_toupper - prints a string in reverse     
 * Return: void
 */
char *string_toupper(char *s)
{
	int a = 0;

	while (s[a])
	{
		if (s[a] >= 'a' && s[a] <= 'z')
			s[a] -= 32;
		a++;
	}
	return(s);
}
