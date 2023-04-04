#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: head of a list
 * @index: index of the node
 * Return: nth node, if index doesn't exist, return NULL
 *
 * Description: This function traverses the linked list starting from the
 * head node and moves to the node at the given index. If the index is out of
 * bounds or the linked list is empty, it returns NULL. If the node exists, it
 * returns a pointer to the node.
 *
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x;

	for (x = 0; x < index && head != NULL; x++)
	{
		head = head->next;
	}

	return (head);
}
