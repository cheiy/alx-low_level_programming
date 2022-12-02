#include "lists.h"
/**
 * insert_nodeint_at_index - Function inserts a new node at a given position.
 * @head: Pointer to the head node.
 * @idx: Index in which to insert the new node.
 * @n: The value to insert in node.
 *
 * Description: Function inserts a new node at a given position.
 *
 * Return: Address of the new node, or NULL if it fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count, i;
	listint_t *new_node, *current_node, *temp_node;

	count = i = 0;
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	if (*head == NULL)
		count = 0;
	current_node = *head;
	while (current_node != NULL)
	{
		current_node = current_node->next;
		count++;
	}
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = (*head);
		*head = new_node;
	}
	else
	{
		current_node = *head;
		while (current_node->next != NULL)
		{
			if (idx  == i + 1)
			{
				temp_node = current_node->next;
				current_node->next = new_node;
				new_node->next = temp_node;
				break;
			}
			else if (idx > count)
				return (NULL);
			current_node = current_node->next;
			i++;
		}
	}
	return (new_node);
}
