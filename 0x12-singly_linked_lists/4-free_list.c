#include "lists.h"
/**
 * free_list - Function frees a list_t list
 * @head: Pointer to the head node.
 *
 * Description: Function frees a list_t list.
 *
 * Return: Nothing.
 */
void free_list(list_t *head)
{
	free(head);
}
