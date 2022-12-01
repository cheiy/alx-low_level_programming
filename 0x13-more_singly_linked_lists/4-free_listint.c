#include "lists.h"
/**
 * free_listint - Function frees a listint_t list
 * @head: Pointer to the head node
 *
 * Description: Function frees a listint_t list
 *
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *current_node;

	if (head == NULL)
		free(head);
	else
	{
		while (head != NULL)
		{
			current_node = head->next;
			free(head);
			head = current_node;
		}
	}
}
