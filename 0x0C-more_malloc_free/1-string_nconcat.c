#include <stdio.h>
#include "holberton.h"

/**
* string_nconcat -  a
* @s1:  a
* @s2:  a
* @int n:a
* Return: a
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	/*counter */
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

}

