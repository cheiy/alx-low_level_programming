#include "lists.h"
/**
 * free_listint_safe - Function frees a listint_t list
 * @h: Pointer to the pointer to the head node.
 *
 * Description: Function free a listint_t list
 *
 * Return: The size of the list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count;
	listint_t *temp;

	while ((*h)->next != NULL)
	{
		temp = *h;
		(*h) = (*h)->next;
		free(temp);
		count++;
	}
	return (count);
}
