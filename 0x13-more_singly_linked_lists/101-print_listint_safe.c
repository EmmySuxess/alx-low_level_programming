#include "lists.h"

/**
 * free_listp - frees a linked list
 * @head: pointer to the head of the list
 *
 * Description:
 * This function frees a linked list by iterating through each node and
 * releasing the memory occupied by it.
 *
 * Return: None
 */
void free_listp(listp_t **head)
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
 * print_listint_safe - prints a linked list.
 * @head: pointer to the head of the list
 *
 * Description:
 * This function prints the values of a linked list while checking for
 * potential loops in the list. If a loop is detected, it prints an arrow
 * indicating the loop and returns the number of nodes printed before the loop.
 *
 * Return: Number of nodes printed before a loop is detected
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nnodes = 0;
	listp_t *hptr, *new, *add;

	hptr = NULL;
	while (head != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)head;
		new->next = hptr;
		hptr = new;

		add = hptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&hptr);
				return (nnodes);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		nnodes++;
	}

	free_listp(&hptr);
	return (nnodes);
}
