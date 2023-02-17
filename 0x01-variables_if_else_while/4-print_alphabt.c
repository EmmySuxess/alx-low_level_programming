#include <stdio.h>

/**
 * main - the main function
 * Return: 0 when successful
 */

int main(void)
{
	char letter = 'a';
		while (letter <= 'z')
		{
			if (letter != 'e' && letter != 'q')
			{
				putchar(letter);
			}
			letter++;
		}
	putchar('\n');
		return (0);
}
