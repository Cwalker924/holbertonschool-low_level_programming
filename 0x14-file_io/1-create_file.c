#include "holberton.h"

/**
 *
 *
 *
 *
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * create_file - function that creats a file
 * @filename: name of file passed in, if NULL return -1
 * @text_content: text in file. creats file if NULL
 * Return: 1 if usccessful, otherwise -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd, fd_write, length;
	char *buf;

	length = _strlen(text_content);
	buf = malloc(sizeof(length));

	/* checks if buf is NULL*/
	if (!buf)
		return (-1);
	/* checks if file is NULL */
	if (!filename)
		return (-1);

	/*creats and opens file with read/write permission*/
	fd = open(filename, O_CREAT | O_RDWR, 0600);
	/* if file as an error */
	if (fd == -1)
		return (-1);

	/*if content is NULL close file */
	if (text_content == NULL)
	{
		close (fd);
		return (1);
	}
	/* write text_content to fd*/
	fd_write = write(fd, text_content, length);
	if (fd_write == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
