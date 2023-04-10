#include "main.h"
#include <stdio.h>

/**
 * print_binary -  prints the binary representation of a number
 * @n: number to print in binary form
 */

void print_binary(unsigned long int n)
{
	int i;
	int count = 0;
	unsigned long int cur;

	for (i = 63; i >= 0; i--)
	{
		cur = n >> i;

		if (cur & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
		{
			_putchar('0');
		}
	}

	if (!count)
	{
		_putchar('0');
	}
}
