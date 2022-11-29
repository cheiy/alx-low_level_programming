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

	elements = 0;
	while (h->next != NULL)
	{
		if (h->str != NULL)
			elements++;
		if (h->len)
			elements++;
		h = h->next;
	}
	return (elements);
}
