#include "lists.h"
/**
 * free_dlistint - Function frees a dlistint_t list.
 * @head: Pointer to the head node.
 *
 * Description: Function frees a dlistint_t list.
 * Return: Nothing.
 */
int free_dlistint(dlistint_t *head)
{
	dlistint_t *current, *temp;
	int retval;

	if (head == NULL)
		return (0);
	if (head->next == NULL)
	{
		free(head);
		return (0);
	}
	else
	{
		current = head;
		while (current->next != NULL)
		{
			temp = current->next;
			free(current);
			current = temp;
		}
		free(current);
		retval = 0;
	}
	return (retval);
}
