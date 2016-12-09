#include "holberton.h"

/**
 * error_97 - wrong usage error
 */
void error_97(void)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
}

/**
 * error_98 - read fail error
 * @str: read file
 */
void error_98(char *str)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", str);
	exit(98);
}

/**
 * error_99 - write fail error
 * @str: write file
 */
void error_99(char *str)
{
	dprintf(STDERR_FILENO, "Error: Can't write  %s\n", str);
	exit(99);
}

/**
 * error_100 - close fail error
 * @fd: file descriptor
 */
void error_100(int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
}

/**
 * main - point of entry/ copies text from one file to another file
 * @argc: number of args entered
 * @argv: actual args being passed
 * Return: 0 upon success, otherwise return -1
 */
int main(int argc, char **argv)
{
	char buf[BUF_SIZE];
	int fd_read, fd_write, err, size;
	mode_t mode;

	mode = S_IWUSR | S_IRUSR | S_IROTH | S_IRGRP | S_IWGRP;
	/* Error checking */
	if (!argv[1])
		error_98(argv[1]);
	if (!argv[2])
		error_99(argv[2]);
	if (argc != 3)
		error_97();
	/* read file descriptor */
	fd_read = open(argv[1], O_RDONLY);
	if (fd_read == -1)
	{
		error_98(argv[1]);
	}

	/* write file descriptor */
	fd_write = open(argv[2], O_RDWR, mode);
	if (fd_write == -1)
	{
		error_99(argv[2]);
	}

	size = 1;
	err = 1;
	while (size)
	{
		size = read(fd_read, buf, BUF_SIZE);
		if (size == -1)
			error_98(argv[1]);
		if (size > 0)
		{
			err = write(fd_write, buf, size);
			if (err == -1)
				error_99(argv[2]);
		}
	}

	err = close(fd_read);
	if (err == -1)
		error_100(fd_read);

	err = close(fd_write);
	if (err == -1)
		error_100(fd_write);

	return (0);
}
