#include "lists.h"
/**
 * sum_dlistint - Function returns the sum of all data(n) of a dlistint_t
 * linked list.
 * @head: Pointer to the head node.
 *
 * Description: Function returns the sum of all data(n) of a dlistint_t
 * linked list.
 *
 * Return: sum of the values, 0 if list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	int sum;

	sum = 0;
	if (head == NULL)
		return (0);
	current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
