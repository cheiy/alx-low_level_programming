#include "lists.h"
/**
 * delete_nodeint_at_index - Function deletes the node at given index of list.
 * @head: Pointer to pointer to the head node.
 * @index: The index of the node to delete.
 *
 * Description: Function deletes the node at given index of linked list.
 *
 * Return: 1 if successful, -1 if it fails.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *current;
	unsigned int idx, i;

	i = idx = 0;
	temp = (*head);
	if (temp == NULL)
		return (-1);
	while (temp != NULL)
	{
		temp = temp->next;
		idx++;
	}
	if (index == 0)
	{
		temp = (*head);
		(*head) = temp->next;
		free(temp);
		return (1);
	}
	else
	{
		current = *head;
		while (current->next != NULL)
		{
			if (index == i + 1)
			{
				temp = current->next;
				current->next = current->next->next;
				return (1);
			}
			else if (index > idx)
			{
				return (-1);
			}
			current = current->next;
			i++;
		}
	}
	return (1);
}

