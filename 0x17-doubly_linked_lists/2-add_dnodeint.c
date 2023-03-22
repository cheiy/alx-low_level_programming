#include "lists.h"
/**
 * add_dnodeint - Function adds a new node at the start of a dlistint_t list
 * @head: Pointer to the head node.
 * @n: The value of the new node.
 *
 * Description: Function adds a new node at the start of a dlistint_t list.
 *
 * Return: Pointer to the new node, NULL if it fails.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);
	if (*head != NULL)
	{
		new->next = *head;
		new->n = n;
		new->prev = NULL;
		(*head)->prev = new;
		*head = new;
	}
	else
	{
		new->n = n;
		new->next = NULL;
		new->prev = NULL;
		*head = new;
	}
	return (*head);
}
