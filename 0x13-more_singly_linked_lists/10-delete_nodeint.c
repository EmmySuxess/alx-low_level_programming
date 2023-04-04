#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Description:
 * This function deletes a node in a linked list at a specified index. If the
 * index is 0, the head of the list is updated to remove the node. If the index
 * is not 0, the function iterates through the list to find the node at the
 * previous index, updates the next pointer of the previous node to bypass the
 * node to be deleted, and frees the memory occupied by the node.
 *
 * Return:
 * 1 if the deletion is successful, -1 if it fails.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int x;
	listint_t *prev;
	listint_t *next;

	prev = *head;

	if (index != 0)
	{
		for (x = 0; x < index - 1 && prev != NULL; x++)
		{
			prev = prev->next;
		}
	}

	if (prev == NULL || (prev->next == NULL && index != 0))
	{
		return (-1);
	}

	next = prev->next;

	if (index != 0)
	{
		prev->next = next->next;
		free(next);
	}
	else
	{
		free(prev);
		*head = next;
	}

	return (1);
}
