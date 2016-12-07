#include "holberton.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char buf[1024];

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

	printf("%s\n", buf);

	return (0);
}
