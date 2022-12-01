#include "lists.h"
/**
 * free_listint2 - Function frees a listint_t list
 * @head: Pointer to pointer to head node
 *
 * Description: Function frees a listint_t list
 *
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *current_node;

	if (*head == NULL)
	{
		free(*head);
	}
	else
	{
		while (*head != NULL)
		{
			current_node = (*head)->next;
			free(*head);
			*head = current_node;
		}
	}
	*head = NULL;
	head = NULL;
}
