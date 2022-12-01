#include "lists.h"
/**
 * add_nodeint - Function adds a new node at the beginning of a listint_t list
 * @head: Pointer to the head of the list.
 * @n: element of the node to add.
 *
 * Description: Function adds a new node at the beginning of a listint_t list
 *
 * Return: The address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = (*head);
	(*head) = temp;
	return (*head);
}
