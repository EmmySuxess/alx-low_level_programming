#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers
 * @a: The array of integers to reverse
 * @n: The number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int i, j;
	int temp;

	/* Swap elements of the array from start and end */
	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}
