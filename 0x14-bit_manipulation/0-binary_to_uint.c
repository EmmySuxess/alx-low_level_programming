#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: char string
 * Return: Converted decimal number or 0 if the number can not be converted
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int r = 0;
	unsigned int x = 1;
	int i = 0;
		
	if (b == NULL)
	{
		return (0);
	}

	for ( i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0')
		{
			/*return ('0');*/
		}
		else if (b[i] == '1')
		{
			r += x;
		}
		else
		{
			return (0);
		}

		x <<= 1;
	}

	return (r);
}
