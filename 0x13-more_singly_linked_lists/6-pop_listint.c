#include "lists.h"
/**
 * pop_listint - Function deletes the head node of a listint_t linked list and
 * then returns head node's data (n)
 * @head: Pointer to the pointer to the head node.
 *
 * Description: Function deletes the head node of a listint_t linked list and
 * then returns the head node's data (n).
 *
 * Return: The head node's data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *temp_node;
	listint_t *current_node;
	int n;

	if (head == NULL || *head == NULL)
		return (0);
	current_node = *head;
	if (current_node != NULL)
	{
		temp_node = current_node;
		n = current_node->n;
		current_node = current_node->next;
		*head = current_node;
		free(temp_node);
	}
	return (n);
}
