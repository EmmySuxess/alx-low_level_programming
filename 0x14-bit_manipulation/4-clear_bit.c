#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: pointer to an unsigned long int
 * @index: the index, starting from 0 of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int x;

	if (index > 63)
	{
		return (-1);
	}

	x = 1 << index;

	if (*n & x)
	{
		*n ^= x;
	}

	return (1);
}
