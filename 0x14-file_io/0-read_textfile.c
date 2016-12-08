#include "holberton.h"

/**
 *
 *
 *
 *
 */

int _print(char *str, unsigned int max)
{
	int i;

	while (str[i] != '\0' && max > 0)
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}

/**/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char buf[1024];
	int p;
	
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
