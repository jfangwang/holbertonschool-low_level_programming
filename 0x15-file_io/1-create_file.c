#include "holberton.h"

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
	int closer, file = 0;
	ssize_t len, written = 0;

	if (!filename)
		return (-1);

	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (file == -1)
		return (-1);
	if (!text_content)
		return (1)

	len = _strlen(text_content);

	written = write(file, text_content, len);

	if (written == -1)
		return (-1);

	closer = close(file);

	if (closer == -1)
		return (-1);

	return (1);
}
