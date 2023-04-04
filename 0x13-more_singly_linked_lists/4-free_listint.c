#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: listint_t listed to be freed
 *
 * Description: This function frees each node in the linked list
 * starting from the head.
 * It does so by iterating through the list with a temporary pointer,
 * updating the head pointer to the next node,
 * and freeing the memory associated with the current node.
 * The function does not return anything.
 *
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while ((tmp = head) != NULL)
	{
		head = head->next;
		free(tmp);
	}
}
