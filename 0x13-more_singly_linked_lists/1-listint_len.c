#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 * @h: linked list to transverse
 *
 * Return: number of nodes in the element listint_t
 */

size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
