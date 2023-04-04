#include "lists.h"

/**
 * addnodeint - adds a new node at the beginning of a linked list
 * @head: points to the first node in the linked list
 * @n: the data to be inserted in the new node
 *
 * Return: pointer to the new node or null if it fails
 *
 * Description: This function creates a new node with the data 'n' and adds it
 * to the beginning of the linked list pointed to by 'head'.
 * If memory allocation fails, the function returns NULL.
 * The function returns a pointer to the new node or NULL if it fails.
 * If the list is empty, the new node becomes the head node.
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
