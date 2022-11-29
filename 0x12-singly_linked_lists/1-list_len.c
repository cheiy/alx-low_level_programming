#include "lists.h"
/**
 * list_len - Function returns the number of elements in a linked list_t list
 * @h: Pointer to the head node.
 *
 * Description: Function returns the number of elements in a linked list_t list
 *
 * Return: The number of elements in a linked list_t list.
 */
size_t list_len(const list_t *h)
{
	int elements;
	const list_t *current;

	elements = 0;
	current = malloc(sizeof(list_t));
	current = h;
	while (current != NULL)
	{
		elements++;
		current = current->next;
	}
	return (elements);
}
