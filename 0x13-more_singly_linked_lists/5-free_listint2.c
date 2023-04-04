#include "lists.h"

/**
 * free_listint2 - frees the linked list
 * @head: pointer to the listint_t to be freed
 *
 * Description: This function frees the memory occupied by all the nodes in
 * the linked list pointed to by 'head'. It sets the `head` to NULL after
 * freeing all the nodes. If 'head' is NULL, the function returns immediately
 * without doing anything.
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
	{
		return;
	}

	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}

	*head = NULL;
}
