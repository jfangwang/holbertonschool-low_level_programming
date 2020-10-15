#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>
/**
* string_nconcat -  a
* @s1:  a
* @s2:  a
* @n:a
* Return: a
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	/*counter */
	char *concat;
	int fredrick1 = 0;
	int fredrick2 = 0;

	while (s1[fredrick1] != '\0')
		fredrick1++;
	while (s2[fredrick2] != '\0')
		fredrick2++;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if ((int) n > fredrick2)
		n = fredrick2;
	concat = malloc(fredrick1 + n + 1);
	if (concat == NULL)
		return (NULL);
	unsigned int index = 0;
	unsigned int index2 = 0;

	for (index = 0; s1[index] != '\0'; index++, index2++)
		concat[index2] = s1[index];
	for (index = 0; index != n; index++, index2++)
		concat[index2] = s2[index];
	concat[index2] = '\0';
	return (concat);
}

