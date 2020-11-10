#include "holberton.h"
/**
*read_textfile - a
*@filename: variables
*@letters: var
*Return: 0
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *willy;
	int fd = 0;
	int reader = 0;
	int written = 0;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	willy = malloc(letters);

	if (!willy)
		return (0);

	reader = read(fd, willy, letters);

	if (reader == -1)
	{
		free(willy);
		return (0);
	}

	written = write(STDOUT_FILENO, willy, reader);

	if (reader == -1)
	{
		free(willy);
		return (0);
	}
	free(willy);
	close(fd);
	return (written);

}
