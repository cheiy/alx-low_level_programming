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
	/*int n;*/

	temp_node = malloc(sizeof(listint_t));
	if (temp_node == NULL)
		exit(EXIT_FAILURE);
	if (*head != NULL)
	{
		temp_node = *head;
		temp_node->n = (*head)->n;
		*head = (*head)->next;
	/*	n = temp_node->n;*/
	}
	/*free(temp_node);*/
	return (temp_node->n);
}
