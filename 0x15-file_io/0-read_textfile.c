#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- reads a text file and
 * prints it to the POSIX standard output
 * @filename: filename(string pointer)
 * @letters: number of letters printed
 * Return: Number of letters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buff;
	ssize_t numrd, numwr;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);
	numrd = read(fd, buff, letters);
	numwr = write(STDOUT_FILENO, buff, numrd);
	close(fd);
	free(buff);
	return (numwr);
}
