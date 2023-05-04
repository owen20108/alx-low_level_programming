#include "main.h"
/**
 * binary_to_uint-convert binary number 
 * to unsigned int.
 * @b: pointing to a string of 0 and 1 chars
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int numb;
	int length, Base_Two;

	if (!b)
		return (0);

	numb = 0;

	for (length = 0; b[length] != '\0'; length++)
		;

	for (length--, Base_Two = 1; length >= 0; length--, Base_Two *= 2)
	{
		if (b[length] != '0' && b[length] != '1')
		{
			return (0);
		}

		if (b[length] & 1)
		{
			numb += Base_Two;
		}
	}

	return (numb);
}
