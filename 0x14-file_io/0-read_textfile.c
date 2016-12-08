#include "holberton.h"

/**
 * _print - prints string
 * @str: string to print
 * @max: letters to print
 * Return: number of characters
 */
int _print(char *str, size_t max)
{
	int i;

	i = 0;
	while (str[i] != '\0' && max > 0)
	{
		_putchar(str[i]);
		i++;
		max--;
	}
	return (i);
}

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
	char buf[1024];
	ssize_t p;

	if (!filename)
		return (0);

	/* opens Requiescat file */
	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);
	/* Reads Requiescat file */
	read(fd, buf, letters);
	buf[letters] = '\0';

	close(fd);

	p = _print(buf, letters);
	return (p);
}
