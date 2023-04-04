#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: first node in the linked list
 * Return: the sum after being added
 *
 * Description: This function takes the head node of a linked list and
 * iterates through each node, adding up the value of the 'n' member of each
 * node to obtain the sum of all the data in the linked list. It returns the
 * sum after being added.
 *
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
