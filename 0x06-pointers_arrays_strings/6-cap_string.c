#include "main.h"
#include <ctype.h>
#include <string.h>

/**
 * cap_string - Capitalizes all words of a string
 * @s: The string to capitalize
 *
 * Return: A pointer to the resulting string
 */
char *cap_string(char *s)
{
	char *p = s;
	int cap_next = 1;

	while (*p)
	{
		if (cap_next && islower(*p))
			*p = toupper(*p);
		cap_next = 0;
		if (strchr(" \t\n ,;.!?\"(){}", *p))
			cap_next = 1;
		p++;
	}

	return (s);
}
