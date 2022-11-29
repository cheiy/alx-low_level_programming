#include "lists.h"
#include <string.h>
/**
 * add_node - Function adds a new node at the beginning of a list_t list
 * @head: Pointer to the head node.
 * @str: str to be duplicated in new node.
 *
 * Description: Function adds a new node at the beginning of a list_t list
 *
 * Return: Pointer to the new node.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	else
	{
		new_node->str = strdup(str);
		new_node->next = (*head);
		(*head) = new_node;
	}
	return (*head);
}
