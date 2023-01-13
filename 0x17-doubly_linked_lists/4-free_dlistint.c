#include "lists.h"
/**
 * free_dlistint - Function frees a dlistint_t list.
 * @head: Pointer to the head node.
 *
 * Description: Function frees a dlistint_t list.
 * Return: Nothing.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current, *temp;

	if (head == NULL)
	{
		printf("Freed!");
		exit(0);
	}
	if (head->next == NULL)
		free(head);
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
	}
}
