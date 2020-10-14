#include <stdlib.h>
#include "holberton.h"
/**
* _strdup -asdf
* @str:str
* Return:a
*/
char *_strdup(char *str)
{
	char *maxwell;
	int index = 0;
	int length = 0;

	if (str == NULL)
		return (0);
	/*Get the length of Maxwell */
	while (str[length] != '\0')
		length++;
	maxwell = malloc(sizeof(char) * (length + 1));
	if (maxwell == NULL)
		return (0);
	while (str[index] != '\0')
	{
		maxwell[index] = str[index];
		index++;
	}
	maxwell[index] =  '\0';

	return (maxwell);
}
