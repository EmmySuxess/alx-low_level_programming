#include "lists.h"

/**
 * print_listint - prints all the numbers of elements in a linked list
 * @h: linked list of all the numbers of elements to print
 *
 * Return: total number of nodes
 *
 */

size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		num++;
	}

	return (num);
}

