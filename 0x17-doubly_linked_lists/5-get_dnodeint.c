#include "lists.h"
/**
 * get_dnodeint_at_index - Function returns the nth node of a dlistint_t linked
 * list.
 * @head: Pointer to the head node.
 * @index: Index to search for.
 *
 * Description: Function returns the nth node of a dlistint_t linked list.
 *
 * Return: Node at the index, NULL if node doesn't exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current, *node;
	unsigned int count;

	count = 0;
	if (head == NULL)
		return (NULL);
	if (index == 0)
	{
		return (head);
	}
	current = head;
	while (current != NULL)
	{
		count++;
		current = current->next;
		if (count == index)
		{
			node = current;
			break;
		}
	}
	if (index > count)
		return (NULL);
	return (node);
}
