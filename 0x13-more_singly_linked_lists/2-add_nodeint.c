#include "lists.h"

/**
 * addnodeint - adds a new node at the beginning of a linked list
 * @head: points to the first node in the linked list
 * @n: the data to be inserted in the new node
 *
 * Return: pointer to the new node or null if it fails
 *
 * Description: add a node int at the beginning of a listint_t list
 *
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
