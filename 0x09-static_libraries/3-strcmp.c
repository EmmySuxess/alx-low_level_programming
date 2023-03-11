#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: The first string to compare
 * @s2: The second string to compare
 *
 * Return: 0 if the strings match, negative if s1 is less than s2,
 *         and positive if s1 is greater than s2
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	/* Compare each character of s1 and s2 */
	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}

	/* Strings match, return 0 */
	return (0);
}
