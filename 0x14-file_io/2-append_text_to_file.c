#include "holberton.h"

/**
 * append_text_to_file - a function that appends a text at
 * the end of a file.
 * @filename: name of file passed in, if NULL return -1
 * @text_content: text in file. creats file if NULL
 * Return: 1 if usccessful, otherwise -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i, text_status;

	/* checks if file is NULL */
	if (!filename)
		return (-1);

	/*creats and opens file with read/write permission*/
	fd = open(filename, O_APPEND | O_WRONLY);

	/* if file as an error */
	if (fd == -1)
		return (-1);

	/*if content is not NULL close file */
	if (!text_content)
	{
		close(fd);
		return (1);
	}

	if (text_content)
	{
		i = 0;
		while (text_content[i] != '\0')
		{
			i++;
		}
		text_status = write(fd, text_content, i);
		if (text_status == -1)
			return (-1);
	}

	close(fd);
	return (1);
}
