#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
* str_concat -  a
* @s1:s
* @s2:s
* Return: s
*/

char *str_concat(char *s1, char *s2)
{
	char *willy;
	int index = 0;
	int arr2 = 0;
	int l = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (index = 0; s1[index] || s2[index]; index++)
		l++;
	willy = malloc(sizeof(char) * l);
	if (willy == NULL)
		return (NULL);
	for (index = 0; s1[index]; index++)
		willy[arr2++] = s1[index];
	for (index = 0; s2[index]; index++)
		willy[arr2++] = s2[index];
	return (willy);
}

