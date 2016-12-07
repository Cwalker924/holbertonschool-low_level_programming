#include "holberton.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char buf[26];

	if (!filename)
		return (0);

	/* opens Requiescat file */
	fd = open("Requiescat", O_RDONLY);

	if (fd == -1)
		return (0);

	write (fd, "Requiescat", letters);

	read(fd, buf, 25);
	buf[25] = '\0';

	close(fd);

	printf("buf: %s\n", buf);
	return (0);
}
