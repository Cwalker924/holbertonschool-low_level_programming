#include "holberton.h"

/**
 * read_textfile - a function that reads a text file and
 * print it to the POSIX standard output.
 * @filename: name of file to be read
 * @letters: the number of letters to read in
 * Return: numbers printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t read_count, write_count;

	if (!filename)
		return (0);

	/* opens Requiescat file */
	fd = open(filename, O_RDWR);
	if (fd == -1)
		return (0);
	/* Reads Requiescat file */
	buf = malloc(sizeof(char) * letters);
	if (!buf)
	{
		free(buf);
		return (0);
	}
	read_count = read(fd, buf, letters);
	if (read_count == -1)
		return (0);

	write_count = write(STDOUT_FILENO, buf, read_count);
	if (write_count == -1)
		return (0);

	free(buf);
	close(fd);

	return (write_count);
}
