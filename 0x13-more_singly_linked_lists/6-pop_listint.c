#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to the first element of the linked list
 * Return: the data inside the element or 0
 * if the list is empty
 *
 * Description: This function deletes the head node of the linked list pointed
 * to by 'head'. It returns the data inside the deleted node. If the list is
 * empty, it returns 0. The function also sets the `head` to point to the next
 * node in the list after deleting the head node.
 *
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int num;

	if (!head || !*head)
	{
		return (0);
	}

	num = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (num);
}
