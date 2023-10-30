#include "main.h"

/**
 * read_textfile - Reads a text file and prints a specified number of letters.
 * @filename: The name of the file to read.
 * @letters: The number of letters to print.
 *
 * Return: The number of letters successfuly printed. if it fails return 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nrd, nwr;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	nrd = read(fd, buf, letters);
	nwr = write(STDOUT_FILENO, buf, nrd);

	close(fd);

	free(buf);

	return (nwr);
}
