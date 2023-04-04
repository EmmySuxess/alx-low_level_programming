#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: pointer to the first node in the list
 * Return: pointer to the first node in the new line
 *
 * Description: This function takes a pointer to the head
 * of a linked list and reverses the order of the nodes in
 * the list. It iterates through the list, changing the next
 * pointers of each node to point to the previous node,
 * effectively reversing the list. Finally, it updates the head
 * pointer to point to the new first node of the reversed list.
 *
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *a;
	listint_t *b;

	a = NULL;
	b = NULL;
	while (*head != NULL)
	{
		b = (*head)->next;
		(*head)->next = a;
		a = *head;
		*head = b;
	}

	*head = a;

	return (*head);
}
