#include "lists.h"

/**
 * add_nodeint_end - add a node at the end of a linked list
 * @head: pointer to the first element in the linked list
 * @n: data to insert in the new element
 * Return: pointer of the new node or NULL if it fails
 *
 * Description: This function creates a new node with the data 'n' and adds it
 * to the end of the linked list pointed to by 'head'. If the list is empty,
 * the new node becomes the head node. The function returns a pointer to the
 * new node, or NULL if memory allocation fails.
 *
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *tmp = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (tmp->next)
	{
		tmp = tmp->next;
	}

	tmp->next = new;

	return (new);
}
