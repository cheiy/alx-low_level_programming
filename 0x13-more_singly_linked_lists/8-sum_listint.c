#include "lists.h"
/**
 * sum_listint - Function returns the sum of all the data (n) of a listint_t
 * linked list
 * @head: Pointer to the head node.
 *
 * Description: Function returns the sum of all the data (n) of a listint_t
 * linked list.
 *
 * Return: Sum of all the data.
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	if (head == NULL)
		sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
