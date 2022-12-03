#include "lists.h"
/**
 * print_listint_safe - Function prints a linked list
 * @head: Pointer to the head node
 *
 * Description: Function prints a linked list.
 *
 * Return: Number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current_node;
	size_t count;

	count = 0;
	while (head != NULL)
	{
		current_node = head;
		printf("%d\n", current_node->n);
		head = head->next;
		count++;
		if (head == NULL)
			break;
	}
	return (count);
}
