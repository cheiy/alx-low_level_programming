#include "lists.h"
/**
 * print_listint - Function prints all the elements of a listint_t list.
 * @h: Pointer to the head node.
 *
 * Description: Function prints all the elements of a listint_t list.
 *
 * Return: The number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t i;
	const listint_t *current;

	i = 0;
	current = h;
	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		i++;
	}
	return (i);
}
