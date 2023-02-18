#include <stdio.h>

/**
 * main - the main function
 * Return: 0 when successful
 */

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');
	if (i != 9)
	{
		putchar(',');
		putchar(' ');
	}
	i++;
	}
		putchar('\n');
	return (0);
}
