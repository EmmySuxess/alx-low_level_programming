#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: unsigned long int input
 * @index:  the index, starting from 0 of the bit you want to get
 * Return: the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int x;

	if (n == 0 && index < 64)
	{
		return (0);
	}

	for (x = 0; x <= 63; n >>= 1, x++)
	{
		if (index == 1)
		{
			return (n & 1);
		}
	}

	return (-1);
}
