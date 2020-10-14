#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
* argstostr -  a
* @ac:  a
* @av:  a
* Return: a
*/

char *argstostr(int ac, char **av)
{
	char *string;
	int byte;
	int index;
	int argument;
	int size = ac;

	if (av == NULL || ac == NULL)
		return (NULL);
	while (argument < ac)
	{
		while (av[arg][byte] != '\0')
			size++;
		argument++;
	}
	string = malloc(sizeof(char) * size + 1);

	index = 0;
	
	while (argument < ac)
	{
		while (av[arg][byte] != '\0')
			size++;
		argument++;
	}
}

