#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *crte_bufr(char *file);
void cloz_file(int fd);

/**
 * crte_bufr - Allocates 1024 byte to buffer.
 * @file:  name of  file buffer is stort char for.
 *
 * Return: pointer for new-allocated buffer.
 */
char *crte_bufr(char *file)
{
	char *bufr;

	bufr = malloc(sizeof(char) * 1024);

	if (bufr == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (bufr);
}

/**
 * cloz_file - Closes file descriptors.
 * @fd: The file descriptor to be closed.
 */
void cloz_file(int fd)
{
	int var;

	var = close(fd);

	if (var == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copy  content of file to other file.
 * @argc: number of arguments.
 * @argv: list of pointers.
 *
 * Return: 0 for success.
 *
 */
int main(int argc, char *argv[])
{
	int from, opn, rd, wrt;
	char *bufr;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	bufr = crte_bufr(argv[2]);
	from = open(argv[1], O_RDONLY);
	rd = read(from, bufr, 1024);
	opn = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(bufr);
			exit(98);
		}

		wrt = write(opn, bufr, rd);
		if (opn == -1 || wrt == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(bufr);
			exit(99);
		}

		rd = read(from, bufr, 1024);
		opn = open(argv[2], O_WRONLY | O_APPEND);

	} while (rd > 0);

	free(bufr);
	cloz_file(from);
	cloz_file(opn);

	return (0);
}
