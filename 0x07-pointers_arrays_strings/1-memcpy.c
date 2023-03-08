#include "main.h"
#include <stdio.h>

/**
 * _memcpy - Copy memory area
 * @dest: Pointer to the destination memory area
 * @src: Pointer to the source memory area
 * @n: The number of bytes to be copied
 *
 * Return: Pointer to the destination memory area
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
*(dest + i) = *(src + i);
}

return (dest);
}
