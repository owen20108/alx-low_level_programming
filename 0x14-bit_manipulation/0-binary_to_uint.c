#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - convert binary numbers to unsigned integer number
 * @b: address for string of bit
 * Return:  unsigned int number for  binary string
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int itr = 0;
	unsigned int numbr = 0;
	unsigned int numbr2 = 1;
	int location;

	if (b == NULL)
		return (0);

	while (b[itr] != '\0')
	{
		if (b[itr] != '1' && b[itr] != '0')
			return (0);
		itr++;
	}

	for (location = (itr - 1); location >= 0; location--)
	{
		if (b[location] == '1')
		{
			numbr += numbr2;
		}
		numbr2 *= 2;
	}
	return (numbr);
}
