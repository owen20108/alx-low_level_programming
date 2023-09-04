#include "main.h"

/**
 * create_file - function Create a file.
 * @filename:  pointer for the name of a file to be created.
 * @text_content: A pointer for string to be write in  file.
 *
 * Return: If the function fail - -1,-1
 */
int create_file(const char *filename, char *text_content)
{
	int fopn, fwr, lnght = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lnght = 0; text_content[lnght];)
			lnght++;
	}

	fopn = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	fwr = write(fopn, text_content, lnght);

	if (fopn == -1 || fwr == -1)
		return (-1);

	close(fopn);

	return (1);
}
