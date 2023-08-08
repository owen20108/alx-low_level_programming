#include "main.h"

/**
 * *create_array - array create an array of chars,
 * and initialize it with a specific character
 * @size: size of the array
 * @c: char to initialize array c
 *
 * Return: pointer to the array (Success), NULL (Error)
 */
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
	char *arry;
	unsigned int contr;

	if (size == 0)
		return (NULL);

	arry = malloc(size * sizeof(char));
	if (arry == NULL)
		return (NULL);
	for (contr = 0; contr < size; contr++)
	{
		arry[contr] = c;
	}

	return (arry);
}
