#include "main.h"
#include <stdio.h>

/**
 * print_binary -  prints the binary representation of a number
 * @n: number to print in binary form
 */

void print_binary(unsigned long int n)
{
int i, mask;

/* Print binary representation in base 2 */
for (i = (sizeof(unsigned long int) * 8) - 1; i >= 0; i--)
{
mask = 1 << i;
printf("%d", (n & mask) ? 1 : 0);
}

printf(" ");

/* Print binary representation in base 8 */
for (i = (sizeof(unsigned long int) * 8) - 1; i >= 0; i -= 3)
{
mask = 7 << i;
printf("%o",(unsigned int)((n & mask) >> i));
}

printf(" ");

/* Print binary representation in base 16 */
for (i = (sizeof(unsigned long int) * 8) - 4; i >= 0; i -= 4)
{
mask = 15 << i;
printf("%X", (unsigned int)((n & mask) >> i));
}
}
