#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 *
 * Description: This function searches for a loop in a
 * linked list by using a slow and fast pointer. The slow
 * pointer moves one step at a time while the fast pointer
 * moves two steps at a time. If there is a loop in the list,
 * the fast pointer will eventually catch up to the slow pointer,
 * indicating the presence of a loop. Then, the slow pointer is reset
 * to the head of the list, and both pointers move one step at a time
 * until they meet again at the same node, which is the node where the
 * loop starts. If no loop is found, NULL is returned.
 *
 * Return: Address of the node where the loop starts,
 * or NULL if no loop is found.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head;
	listint_t *fast = head;

	if (!head)
		return (NULL);

	while (slow && fast && fast->next)
	{
		fast = fast->next->next;
		slow = slow->next;
		if (fast == slow)
		{
			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (fast);
		}
	}
	return (NULL);
}
