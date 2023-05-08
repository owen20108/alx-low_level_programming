#include "main.h"
#include <stdio.h>
#include <stdlib.h>
char *create_buffer(char *file);
void close_file(int fd);
/**
 * create_buffer - Allocate 1024 bytes to the buffer.
 * @file:  name of the file buffer is store chars for.
 * Return:  pointer for  newly-allocate buffer.
 */
char *create_buffer(char *file)
{
	char *buffr;

	buffr = malloc(sizeof(char) * 1024);

	if (buffr == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffr);
}
/**
 * close_file - Closes file descriptors.
 * @fd: The file descriptor to be closed.
 */
void close_file(int fd)
{
	int cn;

	cn = close(fd);

	if (cn == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't cnlose fd %d\n", fd);
		exit(100);
	}
}
/**
 * main - Copies the content of file in another file.
 * @argc:  number of arguments supplie for the program.
 * @argv: An array of pointers to the argument.
 * * Return: 0 on success.
 * * Description: If the argument count is incorrect - exit code 97.
 *              If file_from does not exist or cannot be read - exit code 98.
 *              If file_to cannot be created or written to - exit code 99.
 *              If file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int fromf, tof, rd, wr;
	char *buffr;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffr = create_buffr(argv[2]);
	fromf = open(argv[1], O_RDONLY);
	rd = read(fromf, buffr, 1024);
	tof = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (fromf == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffr);
			exit(98);
		}

		wr = write(tof, buffr, rd);
		if (tof == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffr);
			exit(99);
		}

		rd = read(fromf, buffr, 1024);
		tof = open(argv[2], O_WRONLY | O_APPEND);

	} while (rd > 0);

	free(buffr);
	close_file(fromf);
	close_file(tof);

	return (0);
}
