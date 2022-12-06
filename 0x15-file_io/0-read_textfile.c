#include "main.h"

/**
 * read_textfile - reads a test file and prints it to the
 *                POSIX standard output
 * @filename: name of the file we want to read from
 * @letter: numbers of letters it should read and print
 *
 * Return: actual number of letters it could read and print
 *         if the file can not be opened or read, return 0
 *	   if filename is NULL return 0
 *	   if write fails returns 0
 */
ssize_t read_textfile(const char *filename, size_t letters);
{
	int fd, r, w;
	char *buff;

	if (filename == NULL)
		return (0);

	buff = malloc(sizeof(size_t) * letters);

	if (buff == NULL)
		return (0);

	fd = open(filename, O_CREAT | 0_RDONLY);

	if (fd == -1)
	{
		free(buff);
		return (0);
	}

	r = read(fd, buff, letters);

	if (r == -1)
	{
		free(buff);
		return (0);
	}

	w = write(STDOUT_FILENO, buff, r);

	if (w == -1)
	{
		free(buff);
		return (0);
	}

	free(buff);
	close(fd);

	return (w);
}
