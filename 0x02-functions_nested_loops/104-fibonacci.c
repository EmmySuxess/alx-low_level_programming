#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int count = 2;
unsigned long int prev = 1, curr = 2, next;

printf("%lu, %lu", prev, curr);

while (count < 98)
{
next = prev + curr;
printf(", %lu", next);
prev = curr;
curr = next;
count++;
}

printf("\n");

return (0);
}
