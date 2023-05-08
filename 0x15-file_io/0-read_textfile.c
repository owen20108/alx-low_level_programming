#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - Reads a text file and print it to POSIX stdout.
 * @filename: A pointer for file  name .
 * @letters:  number of letters 
 *           function should read and print.
 *
 * Return: If  function fail or filename is NULL - 0.
 *         O/w - the actual number of bytes  function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op, rd, wr;
	char *buffr;

	if (filename == NULL)
		return (0);

	buffr = malloc(sizeof(char) * letters);
	if (buffr == NULL)
		return (0);

	op = open(filename, O_RDONLY);
	rd = read(op, buffr, letters);
	wr = write(STDOUT_FILENO, buffr, rd);

	if (op == -1 || rd == -1 || wr == -1 || wr != rd)
	{
		free(buffr);
		return (0);
	}

	free(buffr);
	close(op);

	return (wr);
}
