#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocate spaces and intial it to 0
 * @nmemb: # of member to copy
 * @size: size with bytes for every member
 *
 * Return: pointer to array or null
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arry;
	unsigned int cuntr;

	if (size == 0 || nmemb == 0)
		return (NULL);
	arry =  malloc(nmemb * size);
	if (arry == NULL)
		return (NULL);
	for (cuntr = 0; cuntr < (nmemb * size); cuntr++)
	{
		arry[cuntr] = '\0';
	}
	return (arry);
}
