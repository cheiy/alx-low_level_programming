#include "lists.h"
/**
 * add_dnodeint_end - Function adds a new node at the end of a dlistint_t list.
 * @head: Address of the head node.
 * @n: The value of the new node.
 *
 * Description: Function adds a new node at the end of a dlistint_t list.
 *
 * Return: The address of the new element or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *current;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	if (*head == NULL)
	{
		new->n = n;
		new->next = NULL;
		new->prev = NULL;
		*head = new;
	}
	else
	{
		current = *head;
		while (current != NULL)
		{
			if (current->next == NULL)
			{
				new->n = n;
				new->next = NULL;
				new->prev = current;
				current->next = new;
				break;
			}
			current = current->next;
		}
	}

	return (current);
}

