#include <stdio.h>

/**
 * main - the main function
 * Return: 0 when successful
 */

int main(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
		for (j = i + 1; j < 10; j++)
			for (k = j + 1; k < 10; k++)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');
				putchar(k == 9 ? '\n' : ',');
			}
	return (0);
}
