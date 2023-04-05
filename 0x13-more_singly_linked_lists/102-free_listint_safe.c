#include "lists.h"

/**
 * free_listp2 - Frees a linked list.
 * @head: Pointer to the head of the list.
 *
 * Description: This function frees a linked list by iterating through
 * the list and deallocating memory occupied by each node. It takes a
 * pointer to the head of the list as an argument.
 *
 * Return: No return value.
 */
void free_listp2(listp_t **head)
{
	listp_t *tmp;
	listp_t *cur;

	if (head != NULL)
	{
		cur = *head;
		while ((tmp = cur) != NULL)
		{
			cur = cur->next;
			free(tmp);
		}
		*head = NULL;
	}
}

/**
 * free_listint_safe - Frees a linked list.
 * @h: Pointer to the head of the list.
 *
 * Description: This function frees a linked list while handling
 * cases where the list might contain loops. It uses an auxiliary
 * linked list of type listp_t to keep track of visited nodes and
 * prevent infinite loops. It takes a pointer to the head of the list
 * as an argument.
 *
 * Return: Size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t nnodes = 0;
	listp_t *hptr, *new, *add;
	listint_t *cur;

	hptr = NULL;
	while (*h != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)*h;
		new->next = hptr;
		hptr = new;

		add = hptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (*h == add->p)
			{
				*h = NULL;
				free_listp2(&hptr);
				return (nnodes);
			}
		}

		cur = *h;
		*h = (*h)->next;
		free(cur);
		nnodes++;
	}
	*h = NULL;
	free_listp2(&hptr);
	return (nnodes);
}
