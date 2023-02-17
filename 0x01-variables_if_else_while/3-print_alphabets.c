#include <stdio.h>

/**
 * main - this is the main function
 * Return: 0 when successful
 */

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

	letter = 'A';
		while (letter <= 'Z')
		{
			putchar(letter);
			letter++;
		}
		putchar('\n');
	return (0);
}
