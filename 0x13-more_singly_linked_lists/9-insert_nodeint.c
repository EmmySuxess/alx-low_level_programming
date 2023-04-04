#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the first node in the list
 * idx: index where the new node is added
 * @n: data to insert in the new node
 * Return: pointer to the new node if successful or NULL otherwise
 *
 * Description: This function inserts a new node with the given data 'n'
 * at the specified index 'idx' in the linked list pointed to by 'head'.
 * The index is 0-based, where 0 represents the beginning of the list.
 * If the index is out of bounds, or if memory allocation fails,
 * NULL is returned.
 *
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x;
	listint_t *new;
	listint_t *tmp = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
	{
		return (NULL);
	}

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (x = 0; tmp && x < idx; x++)
	{
		if (x == idx - 1)
		{
			new->next = tmp->next;
			tmp->next = new;
			return (new);
		}
		else
		{
			tmp = tmp->next;
		}
	}

	return (NULL);
}
