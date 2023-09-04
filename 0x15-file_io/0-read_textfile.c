#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Read the text file and print it in POSIX stdout.
 * @filename: pointer for name of file.
 * @letterds: The number of charcters of function to rw
 *
 * Return: test function fail or filename is NULL - 0.
 * O/w - the real number of bytes for function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t opn, rd, wrt;
	char *bufr;

	if (filename == NULL)
		return (0);

	bufr = malloc(sizeof(char) * letters);
	if (bufr == NULL)
		return (0);

	opn = open(filename, O_RDONLY);
	r = read(opn, bufr, letters);
	wrt = write(STDOUT_FILENO, bufr, r);

	if (opn == -1 || rd == -1 || wrt == -1 || wrt != rd)
	{
		free(bufr);
		return (0);
	}

	free(bufr);
	close(opn);

	return (wrt);
}
