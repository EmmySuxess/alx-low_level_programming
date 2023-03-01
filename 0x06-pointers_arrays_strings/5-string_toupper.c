#include "main.h"
#include <ctype.h>

/**
 * string_toupper - Changes all lowercase letters of a string to uppercase
 * @s: The string to convert
 *
 * Return: A pointer to the resulting string
 */
char *string_toupper(char *s)
{
	char *p = s;

	while (*p)
	{
		if (islower(*p))
			*p = toupper(*p);
		p++;
	}

	return (s);
}
