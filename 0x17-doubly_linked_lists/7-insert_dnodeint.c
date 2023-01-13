#include "lists.h"
/**
 * insert_dnodeint_at_index - Function inserts a new node at a given position.
 * @h: Pointer to the head node.
 * @idx: The index in which to insert.
 * @n: The value to insert.
 *
 * Description: Function inserts a new node at a given position.
 *
 * Return: The address of the new node, NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *current;
	unsigned int count;

	count = 0;
	if (idx == 0 || *h == NULL)
	{
		new = add_dnodeint(h, n);
		return (new);
	}
	if (*h != NULL)
	{
		current = *h;
		count = 1;
		while (current->next != NULL)
		{
			count++;
			current = current->next;
			if (idx == count)
			{
				new = malloc(sizeof(dlistint_t));
				new->n = n;
				new->prev = current;
				new->next = current->next;
				current->next = new;
				current->next->prev = new;
				break;
			}
		}
		return (current);
	}
	if (idx > count)
		return (0);
	if (idx == count)
	{
		new = add_dnodeint_end(h, n);
		return (new);
	}
	return (0);
}
