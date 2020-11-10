#incldue "holberton.h"

/**
*_strlen - finds len
*@s: var
*Return: int
*/
size_t _strlen(char *s)
{
	int a = 0;

	while (s[a] != '\0')
		a++;
	return (a);
}


/**
*create_file - creates a file
*@filename: var
*@text_content: var
*Return: 1 OR -1
*/
int create_file(const char *filename, char *text_content)
{
	if (!filename)
		return (-1);
	return (1);
}
