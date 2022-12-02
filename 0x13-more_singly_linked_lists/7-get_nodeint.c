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
	unsigned int count, i;
	listint_t *current_node;
	listint_t *indexed_node;

	i = 0;
	count = 0;
	if (head == NULL)
		return (NULL);
	current_node = head;
	while (current_node != NULL)
	{
		current_node = current_node->next;
		count++;
	}
	if (index == 0)
		indexed_node = head;
	else
	{
		current_node = head;
		while (current_node != NULL)
		{
			if (index == i)
			{
				indexed_node = current_node;
				return (indexed_node);
			}
			else if (index > count - 1)
			{
				printf("(nil)\n");
				exit(EXIT_FAILURE);
			}
			current_node = current_node->next;
			i++;
		}
	}
	return (indexed_node);
}

