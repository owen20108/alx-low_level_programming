#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Read the text file and print it in POSIX stdout.
 * @filename: pointer for name of file.
 * @letters: The number of charcters of function to rw
 *
 * Return: test function fail or filename is NULL - 0.
 * O/w - the real number of bytes for function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fopn, frd, fwr;
	char *bufr;

	bufr = malloc(sizeof(char) * letters);
	if (bufr == NULL || filename == NULL)
		return (0);

	fopn = open(filename, O_RDONLY);
	if (fopn == -1)
		return (0);

	frd = read(fopn, bufr, letters);
	if (frd == -1)
		return (0);

	fwr = write(STDOUT_FILENO, bufr, frd);
	if (fwr == -1)
		return (0);

	close(fopn);
	free(bufr);
	return (fwr);
}
