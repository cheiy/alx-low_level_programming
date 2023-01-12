#include "lists.h"
/**
 * dlistint_len - Function Returns the number of elements in a doubly linked
 * list
 * @h: Pointer to the head node.
 *
 * Description: Function returns the number of elements in a doubly linked list
 *
 * Return: The number of elements.
 *
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current;
	size_t count;

	if (h == NULL)
		return (0);
	current = h;
	count = 0;

	while (current != NULL)
	{
		current = current->next;
		count++;
	}

	return (count);
}
