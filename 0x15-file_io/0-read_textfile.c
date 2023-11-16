#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Read text file and print to STDOUT.
 * @filename: Text file being read
 * @letters: Number of letters to be read
 * Return: Number of bytes read and printed, 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	int fd, r, w;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		close(fd);
		return (0);
	}

	r = read(fd, buf, letters);
	if (r == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}

	w = write(STDOUT_FILENO, buf, r);
	if (w == -1 || w != r)
	{
		free(buf);
		close(fd);
		return (0);
	}

	free(buf);
	close(fd);
	return (w);
}
