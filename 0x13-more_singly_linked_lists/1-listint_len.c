#include "lists.h"
/**
 * listint_len - Function returns the number of elements in a linked listint_t
 * list
 * @h: Pointer to the head node.
 *
 * Description: Function returns the number of elements in a linked listint_t
 * list.
 *
 * Return: Numbef of elements in linked list.
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *current;
	size_t count;

	count = 0;

	current = h;
	while (current != NULL)
	{
		current = current->next;
		count++;
	}
	return (count);
}
