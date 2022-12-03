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
	listint_t **current_node;
	listint_t *temp;

	current_node = head;
	if (!current_node)
	{
		free(current_node);
	}
	else
	{
		temp = *head;
		while (temp != NULL)
		{
			temp = (*head)->next;
			free(*head);
			*head = temp;
		}
	}
}
