#include "holberton.h"
/**
* check - nat. sqr. root. of n
* @start: int
* @end: int
* @word: char
* Return: 0 or 1
*/
int check(int start, int end, char *word)
{
	if (word[start] == word[end])
	{
		if (end - start == 1 || end - start == 2)
			return (1);
		if (end - start >= 3)
			return (check(start + 1, end - 1, word));
	}
	return (0);
}

/**
* length - gets length of string
* @s: char
* Return: length
*/
int length(char *s, int count)
{
	if (s[count] != '\0')
		return (length(s, ++count));
	else
		return (count - 1);
}
/**
* is_palindrome - nat. sqr. root. of n
* @s: int
* Return: root of num
*/
int is_palindrome(char *s)
{
	int b = 0;

	return (check(b, length(s, 0), s));
}
