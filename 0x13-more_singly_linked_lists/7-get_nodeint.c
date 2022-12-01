#include "lists.h"
/**
 * get_nodeint_at_index - Function returns the nth node of a listint_t list
 * @head: Pointer to the head node.
 * @index: The node to return.
 *
 * Description: Function returns the nth node of a listint_t linked list.
 *
 * Return: The node, NULL if it does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;
	listint_t *current_node;
	listint_t *indexed_node;

	count = 0;
	if (head == NULL)
		return (NULL);
	current_node = head->next;
	while (current_node != NULL)
	{
		count++;
		if (count == index)
		{
			indexed_node = current_node;
			break;
		}
		current_node = current_node->next;
	}
	return (indexed_node);
}

