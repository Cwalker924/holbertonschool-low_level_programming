#include "holberton.h"

/**
 * create_file - function that creats a file
 * @filename: name of file passed in, if NULL return -1
 * @text_content: text in file. creats file if NULL
 * Return: 1 if usccessful, otherwise -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd, i, text_status;

	/* checks if file is NULL */
	if (!filename)
		return (-1);

	/*creats and opens file for write only and
	  read/write permission, owner permission*/
	fd = open(filename, O_CREAT | O_WRONLY, S_IRUSR | S_IWUSR);
	/* if file as an error */
	if (fd == -1)
		return (-1);

	/*if content is NULL close file */
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
