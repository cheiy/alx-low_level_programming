#include "lists.h"
/**
 * delete_dnodeint_at_index - Function deletes the node at given index.
 * @head: Pointer to the head node
 * @index: The index from which to delete the new node.
 *
 * Description: Function deletes the node at given index.
 *
 * Return: 1 if successful, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *temp;
	int retval;
	unsigned int count;

	count = 0;
	if (*head == NULL)
		return (-1);
	current = *head;
	while (current != NULL)
	{
		count++;
		current = current->next;
		if (count == index)
		{
			temp = current;
			free(current);
			current = temp;
			retval = 1;
			break;
		}
		else
			retval = -1;
	}
	return (retval);
}
