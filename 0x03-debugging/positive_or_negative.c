#include "main.h"

/**
 * positive_or_negative - checks for positive or negative outcome
 *
 * @i: the number to be checked
 * Return: 0
 */

void positive_or_negative(int i)
{
if (i < 0)
printf("%d is less than zero\n", i);
else if (i == 0)
printf("%d is zero\n", i);
else
printf("%d is greater than zero\n", i);
}
