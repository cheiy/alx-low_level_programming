#include "lists.h"
#include <string.h>
/**
 * add_node_end - Function adds a new node at the end of a list_t list
 * @head: Pointer to the head node.
 * @str: str in last node to be duplicated in new node.
 *
 * Description: Function adds a new node at the end of a list_t list
 *
 * Return: Pointer to the new node.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	new_node->next = NULL;
	if ((*head) == NULL)
	{
		(*head) = new_node;
	}
	return (new_node);
}
