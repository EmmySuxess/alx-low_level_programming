#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: the size of the times table
 *
 * Return: void
 */
void print_times_table(int n)
{
int i, j, prod;

if (n >= 0 && n <= 15)
{
for (i = 0; i <= n; i++)
{
_putchar('0');
for (j = 1; j <= n; j++)
{
prod = i * j;
_putchar(',');
_putchar(' ');
if (prod <= 9)
_putchar(' ');
if (prod <= 99)
_putchar(' ');
if (prod >= 100)
{
_putchar(prod / 100 + '0');
_putchar((prod / 10 % 10) + '0');
}
else if (prod >= 10)
{
_putchar(' ');
_putchar(prod / 10 + '0');
}
_putchar(prod % 10 + '0');
}
_putchar('\n');
}
}
}
