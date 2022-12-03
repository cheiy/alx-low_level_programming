#include "lists.h"
/**
 * reverse_listint - Function reverses a listint_t list
 * @head: Pointer to a pointer to the head
 *
 * Description: Function reverses a listint_t list
 *
 * Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *reverse, *current;

	current = *head;
	while (current == NULL)
	{
		reverse = reverse_listint(head);
	}
	return (reverse);
}
