#include "main.h"

/**
 * *create_array - array create an array of chars,
 * and initialize it with a specific character
 * @size: size of the array
 * @c: char to initialize array c
 *
 * Return: pointer to the array (Success), NULL (Error)
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int contr = 0;

	if (size == 0)
		return (NULL);

	ptr = (char *) malloc(sizeof(char) * size);

	if (ptr == NULL)
		return (0);

	while (contr < size)
	{
		*(ptr + contr) = c;
		contr++;
	}

	*(ptr + contr) = '\0';

	return (ptr);
}
