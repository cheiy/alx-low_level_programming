#include "lists.h"
/**
 * print_dlistint - Function prints all the elements of a dlistint_t list
 * @h: Pointer to the head node.
 *
 * Description: Function prints all the elements of a doubly linked list
 *
 * Return: Number of nodes in the list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current;
	size_t count;

	if (h == NULL)
		return (0);

	current = h;
	count = 0;
	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		count++;
	}

	return (count);
}
