#include "main.h"
#include <string.h>

/**
 * leet - Encodes a string into 1337
 * @str: The string to encode
 *
 * Return: A pointer to the resulting string
 */
char *leet(char *str)
{
	char *leet = "aAeEoOtTlL";
	char *encode = "4433007711";
	char *p;

	for (p = str; *p; p++)
	{
		char *q = strchr(leet, *p);

		if (q)
			*p = encode[q - leet];
	}

	return (str);
}
