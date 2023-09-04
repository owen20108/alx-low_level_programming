#include "main.h"

/**
 * append_text_to_file - edit text for exist file
 * @filename: pointer for filename/path
 * @text_content: a content will print
 * Return: 1 for success or -1 for fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fopn, fwr, itrtr = 0;

	if (filename == NULL)
		return (-1);

	fopn = open(filename, O_APPEND | O_WRONLY);
	if (fopn == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[itrtr] != '\0')
			itrtr++;

		fwr = write(fopn, text_content, itrtr);
		if (fwr == -1)
			return (-1);
	}
	return (1);
}
